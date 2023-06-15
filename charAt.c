#include<stdlib.h>
#include<stdio.h>
#include<string.h>

const char * charAt(const char * str, int index)
{
    int size = strlen(str);
    char * tmp = (char*) malloc(sizeof(char) * 2);
    if (index >= size || index < 0)
    {
        tmp = "\0";
        return tmp;
    }
    tmp[0] = str[index];
    tmp[1] = '\0';
    return tmp;
}

int main(){
    const char * str = {"hello"};
    const char * tmp = charAt(str,8);
    printf("%c",tmp[0]);
}