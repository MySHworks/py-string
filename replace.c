 #include<stdio.h>
 #include<string.h>
 #include "py_string.h"
 
 int my_find(char *source,char *target,int begin,int end){
          int i = begin, j = 0;
          while(source[i] != '\0' && target[j] != '\0' && i <= end){
                  if(source[i]==target[j]) {
                         i++;
                          j++;
                  } else {
                          i = i - j + 1;
                          j = 0;
                  }
          }
          if(target[j]=='\0') {
                 return i - j;
         }
         return -1;
 }
 
 void replace(char *s1,char *str,char *rep,char s2[],int num){
          int  find(char *source,char *target,int begin,int end);
          int j1 = 0;
          int j2 = 0;
          int i,k,m,N;
          int sym;
          int count = 0;
          char s_tem[strlen(s1)];
          if(strlen(str)<strlen(rep))
                  N=strlen(rep)-strlen(str);
          else
                  N=strlen(str)-strlen(rep);
          i=my_find(s1,str,0,strlen(s1));
          if(i==-1)
                  printf("要替换的字符不在该字符串中\n");
          else{
                  do{
                         
                          for(;j2<i;j1++,j2++){
                                 s2[j1]=s1[j2];}
                         sym=i+strlen(str);
                         i=my_find(s1,str,sym,strlen(s1));
                         for(k=0;k<strlen(rep);k++)
                                 s2[j1+k]=rep[k];
                         j1+=strlen(rep);
                         j2+=strlen(str);
                         count++;

                 }while(i!=-1 && count<num);
                 for(;j2<strlen(s1);j1++,j2++){
                         s2[j1]=s1[j2];
                 }
         }
}
