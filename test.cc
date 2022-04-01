#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/sysinfo.h>
#include<unistd.h>

#define __USE_GNU
#include<sched.h>
#include<ctype.h>
#include<string.h>
#include<pthread.h>
#include<syslog.h>


void* threadFun(void* arg)
{
    int cpucore = *(int*)arg;
    printf("bind %d cpu to this thread \n", cpucore);

    cpu_set_t mask;
    CPU_ZERO(&mask);

    CPU_SET(cpucore,&mask);

    printf("thread %lu, cpucore = %d\n", pthread_self(), cpucore);
    if(-1 == pthread_setaffinity_np(pthread_self() ,sizeof(mask),&mask)) {
        printf("bind error \n");
    }

    for(;;) {
        //printf("run...\n");
    }

    return NULL;
}

int main(int argc, char* argv[])
{
    int cpucorenum;
    pthread_t thread;

    cpucorenum = sysconf(_SC_NPROCESSORS_CONF);  /*获取核数*/
    printf("system has %i processor(s). \n", cpucorenum);

    cpucorenum = 3; /*把线程绑定到某个核上*/

    pthread_create(&thread,NULL,threadFun,(void*)&cpucorenum);

    pthread_join(thread,NULL);/*等待所有的线程结束，线程为死循环所以CTRL+C结束*/

    return 0;
}