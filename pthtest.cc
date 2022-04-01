#include<iostream>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>


struct foo{
    int f_count;
    pthread_mutex_t f_lock;
    int f_id;
};

struct foo * foo_alloc(int id)
{
    struct foo *fp;
    if((fp = (struct foo *)malloc(sizeof(struct foo))) != NULL)
    {
        fp->f_count = 1;
        fp->f_id = id;
        if(pthread_mutex_init(&fp->f_lock,NULL)!=0)
        {
            free(fp);
            return NULL;
        }
    }
    return fp;
}

void foo_hold(struct foo* fp)
{
    pthread_mutex_lock(&fp->f_lock);
    fp->f_count++;
    pthread_mutex_unlock(&fp->f_lock);
}

void foo_rele(struct foo* fp)
{
    pthread_mutex_lock(&fp->f_lock);
    if(--fp->f_count == 0)
    {
        pthread_mutex_unlock(&fp->f_lock);
        pthread_mutex_destroy(&fp->f_lock);
        free(fp);
    }else{
        pthread_mutex_unlock(&fp->f_lock);
    }
}

int main()
{
    struct foo* fp = foo_alloc(19);
    
    for(int i=0;i<10;i++)
    {
        foo_hold(fp);
        std::cout<<fp->f_count<<std::endl;
        sleep(1);
    }

    while(fp->f_count!=0)
    {
        foo_rele(fp);
        std::cout<<fp->f_count<<std::endl;
        sleep(1);
    }

    foo_rele(fp);

    return 0;

    

}