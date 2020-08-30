 #include<stdio.h>
 #include "py_string.h"
 
 void lower(char str[]){
         int i = 0;
         while(str[i]!='\0'){
                 if(str[i]>='A' && str[i]<='Z'){
                         str[i]=str[i]+32;
                         i++;
                 }else i++;
         }
 }
 
