#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int charCodeAt(const char * str, int index)
{
    int size = strlen(str);
    if (index >= size || index < 0)
    {
        return 0;
    }
    return (int)str[index];
}

int main(){
    const char * str = "hello";
    int tmp = charCodeAt(str,2);
    printf("%d",tmp);
}