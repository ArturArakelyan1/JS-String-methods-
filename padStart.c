#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const char * padStart(const char* str,int length, const char* sub){
    int size =  strlen(str);
    char * ptr =  (char*) malloc(length + 1);
    int j = 0;
    for (int i = 0; i < length - size ; i++)
    {
        ptr[i] = sub[j];
        j++;
        if (j == strlen(sub))
        {
            j = 0;
        }
        
    }
    strcat(ptr,str);
    return ptr;
}

int main(){
    const char * pr = padStart("hell",15,"tge");
    for (size_t i = 0; i < 15; i++)
   {
    printf("%c",pr[i]);
    
   }
}