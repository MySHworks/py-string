#include<stdio.h>
#include<string.h>
#include "py_string.h"

void split(const char *str, char target[], int num, char s[][strlen(str)]){
        int i = 0;
        int j = 0;
        int k = 0;
        int m,sym = -1;
        int N = strlen(target);
        while(str[i]!='\0'){
                if(str[i]==target[j]){
                         j++;
                         i++;
                 }else{
                         i = i-j+1;
                         j = 0;
                 }
                 if(target[j]=='\0' && sym<=num){
                         sym++;
                         if(sym<num){
                                 for(m=0;k<i-N;m++,k++){
                                          s[sym][m]=str[k];
                                  }
                                  k=i;
                                  printf("k=%d\n",k);
                                  s[sym][m]='\0';
                          }else{
                                 printf("strlen=%ld\n",strlen(str));
                                 for(m=0;k<strlen(str);m++,k++)
                                         s[sym][m]=str[k];
                                 s[sym][m]='\0';
                          }
                 }
         }
         printf("strlen=%ld\n",strlen(str));
         for(m=0;k<strlen(str);m++,k++)
         s[sym][m]=str[k];
         s[sym][m]='\0';
 }
