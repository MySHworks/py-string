 #include<stdio.h> 
 #include<string.h>
 #include "py_string.h"      
 
void capitalize(char str[]){ 
          if(str[0]=='\0')
          printf("该字符串为空");  
          else{  
              if(str[0]>='a' && str[0]<='z')
              str[0]=str[0]-32;  
              }
} 
