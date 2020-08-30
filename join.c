 #include<stdio.h>
 #include<string.h>
 #include "py_string.h"
 
 void join(const char s1[][10], char *seq, char s2[]){
         int    i = 0;
         int    N;
         while(strcmp(s1[i],"\0")!=0){
                 strcat(s2,s1[i]);
                 strcat(s2,seq);
                 i++;
         }
         N=strlen(s2);
         s2[N-1]='\0';
 }

