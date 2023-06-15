#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const char * repeat(const char * str,int time){
    int size = strlen(str) * time;
    char * tmp = (char* )malloc (size + 1);
    while (time != 0 )
    {
        strcat(tmp,str);
        time--;
    }
    return tmp;
}
int main (){
    const char * tmp = repeat("abc",3);
     for (size_t i = 0; i < 9; i++)
   {
    printf("%c",tmp[i]);
    
   }
}