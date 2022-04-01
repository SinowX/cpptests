#include <stdio.h>
#include <cstring>
#include <cstdint>
#include <cstdlib>

/* static char* uint2bin(uint8_t src) */
/*   { */
/*     uint8_t table[8]={128,64,32,16,8,4,2,1}; */
/* 		char* tmp = (char*)malloc(9); */
/* 		memset(tmp, 0, 9); */
/*     for(int i=0;i<8;i++) */
/*     { */
/*       if(src>=table[i]) */
/*       { */
/*         tmp[i]=1; */
/*         src=src-table[i]; */
/*       }else{ */
/*         tmp[i]=0; */
/*       } */
/*     } */
/*     sprintf(tmp, "%u%u%u%u%u%u%u%u", */
/*         tmp[7],tmp[6],tmp[5],tmp[4],tmp[3],tmp[2],tmp[1],tmp[0]); */

/*     return tmp; */
/*   } */



void hello_strcmp(const char* cstr1, const char* cstr2, char *res)
  {
    /* text *str1 = PG_GETARG_TEXT_PP(0); */
    /* text *str2 = PG_GETARG_TEXT_PP(1); */
    /* char* cstr1 = text_to_cstring(str1); */
    /* char* cstr2 = text_to_cstring(str2); */
    size_t cstr1_len = strlen(cstr1);
    size_t cstr2_len = strlen(cstr2);
    /* char res[3] = {'0','\0','\0'}; */
    size_t min_len = (cstr1_len>cstr2_len)? cstr2_len : cstr1_len;
		bool same_in_min_length=true;
    
		for(size_t i=0;i< min_len; i++)
    {
      if (cstr1[i]>cstr2[i])
      {
        res[0]='1';
        same_in_min_length=false;
        break;
      }
      else if(cstr1[i]<cstr2[i])
      {
        res[0]='-';
        res[1]='1';
        break;
        same_in_min_length=false;
      }else {continue;}
    }

    if(same_in_min_length)
    {
      if(cstr1_len>cstr2_len) res[0]='1';
      else if(cstr1_len<cstr2_len)
      {
        res[0]='-';
        res[1]='1';
      }
    }
		/*     PG_RETURN_TEXT_P(cstring_to_text(res)); */

  }



int main()
{
	char res[3]={'0','\0','\0'};
	const char* cstr1 = "asdd";
	const char* cstr2 = "asdd";
	hello_strcmp(cstr1, cstr2, res);
	printf("%s\n",res);
}
