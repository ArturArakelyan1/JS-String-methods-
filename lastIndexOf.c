#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

int lastIndexOf(const char * str, const char * substr, int index)
{
    int size1 = strlen(str);
    int size2 = strlen(substr);
    if (index < 0 )
    {
        index = 0;
    }
    int j = size2;
    int pos = 0;
    for (int i = size1; i >= 0 ; --i)
    {
        if (str[i] == substr[j])
        {
            pos = i;
            j--;
        }
        
    }
    if (j < 0 )
    {
        if (pos < index)
        {
           return pos;
        }
    }
    return -1;
}
int main(){
    const char * tmp = "there hello there";
    const char * sub = "there";
    printf("%d",lastIndexOf(tmp,sub,18));
}