#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const char * toUpperCase(const char * str)
{
    int size = strlen(str);
    char * tmp = (char * ) malloc(sizeof(char) * size + 1);
    for (int i = 0; i < size; i++) 
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            tmp[i] = str[i] - 32; 
        }
        else
        {
            tmp[i] = str[i]; 
        }
    }
    tmp[size] = '\0';
    return tmp;
}

int main()
{
    const char* str = "Hello World";
    const char* result = toUpperCase(str);
    printf("%s\n", result);
    free((void*)result); // Remember to free the dynamically allocated memory
    return 0;
}