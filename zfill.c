#include<stdio.h>
#include<string.h>
#include "py_string.h"

void zfill(char str[],int width){
        int i = width-1;
        int N = strlen(str);
        int j = N-1;
        char *s;
        s=str;
        if(width<=N){
                str[width] = '\0';
        }
        else{
                while(i>=0){
                        for(;j>=0;i--,j--){
                                str[i]=s[j];
                        }
                        str[i]=' ';
                        i--;
                }
                str[width]='\0';
        }
}
