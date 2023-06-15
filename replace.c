#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const char * replace(const char * str, const char * substr,const char * insert)
{
    int size1 = strlen(str);
    int size2 = strlen(substr);
    int size3 = strlen(insert);
    char * ptr =strstr(str,substr);
    int index = ptr - str;
    int sizea = (size1 - size2) + size3 + 1;
    char * tmp = (char*) malloc ((size1 - size2) + size3 + 1);
    strncpy(tmp,str,index );
    int j = 0;
    for (int i = index ; j <= size3; i++)
    {
        tmp[i] = insert[j];
        j++;
    }
    int ind = index + size2;
    for (int i = index + size3; i < sizea; i++)
    {
        tmp[i] = str[ind];
        ind++;
    }
    tmp[sizea] = '\0';
    return tmp;
}
int main(){
    const char * str = "The quick brown fox jumps over the lazy dog. If the dog reacted, was it really lazy?";
    const char * substr = "dog";
    const char * insert = "monkey";
    const char * tmp = replace(str,substr,insert);
    printf("%s\n", tmp);
    free((void*)tmp);
}