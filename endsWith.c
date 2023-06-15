#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

bool endsWith(const char * str1, const char * substr, int index )
{
    int size1 = strlen(str1);
    int size2 = strlen (substr);
    if (index > size1 )
    {
        index = size1; 
    }
    if (index < 0)
    {
        return false;
    }
    
    for (int i = size2 ; i >= 0 ; i--)
    {
        if (str1[index] != substr[i] || index < 0)
        {
            return false;
        }
        --index;
    }
    return true;
}
