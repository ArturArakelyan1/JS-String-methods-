#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const char * padEnd(const char * str, const char * substr){
    int size = strlen(str) + strlen(substr) + 1;
    char * tmp = (char *) malloc(sizeof(char) * size);
    strcpy(tmp,str);
    strcat(tmp,substr);
    return tmp;
}
int main(){
    const char * pt = padEnd("hello","aaaaaaaa");
   for (size_t i = 0; i < 15; i++)
   {
    printf("%c",pt[i]);
    
   }
   
}