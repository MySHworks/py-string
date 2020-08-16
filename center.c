#include<stdio.h> 
#include<string.h>
#include "py_string.h" 
 
void center(char str[],char str2[],int width){
        int N = strlen(str);  
        int i,l,j,a=0; 
        if(width<N) {     
              for(i=0;i<width;i++){
              str2[i]=str[i];  
              }      
              str2[width]='\0';     
              }else{
                  l=(width-N)/2;     
                  for(i=0,j=0; i<width; i++,j++){     
                  if(j < l) str2[i]=' '; 
                  else if(a<N){              
                  str2[i]=str[a];  
                  a++;     
                  }    
                  else str2[i]=' ';
                  }
                  str2[width]='\0'; 
                  }
        } 
 
