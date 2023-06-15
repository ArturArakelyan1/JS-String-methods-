#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const char * replaceAll(const char * str, const char * substr, const char * insert){
    int size1 = strlen(str);
    int size2 = strlen(substr);
    int size3 = strlen(insert);
    char * ptr = strstr(str,substr);
    int index = str - ptr;
    const char *match = str;
    int count = 0;
    while ((match = strstr(match, substr)) != NULL) {
        count++;
        match += size2;
    }


}