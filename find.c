 #include<stdio.h>
 #include<string.h>
 #include "py_string.h"
 
 int begin,end;
 int find(char *source,char *target,int begin,int end){
         if (source[begin] == '\0' || source[end] == '\0')
                 printf("所查找的区域不在目标字符串中");
         else{
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
 }
