#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const char * Concat (const char * str1, const char * str2, const char * str3)
{
    int size = strlen(str1) + strlen(str2) + strlen(str3) + 1;
    char * tmp = (char * ) malloc(size * sizeof(char));
    strcpy(tmp,str1);
    strcat(tmp,str2);
    strcat(tmp,str3);
    return tmp ;
}

int main(){
    const char * str = "hello";
    const char * tmp = Concat(str," ","world");
    for (size_t i = 0; i < strlen(tmp); i++)
    {
        printf("%c",tmp[i]);
    }
    
}