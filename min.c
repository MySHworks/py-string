#include<stdio.h>
#include<string.h>
#include "py_string"

char fun(char *p)
{
         char min=p[0];
         int i =0;
         while(i<strlen(p)-1)
         {
                 if(min>p[i]){
                         min=p[i];
                 }
                 i++;
         }
         return (min);
 }
