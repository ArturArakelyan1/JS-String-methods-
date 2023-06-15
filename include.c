#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool Includes(const char * str1, const char * substr)
{
    int size1 = strlen(str1);
    int size2 = strlen(substr);
    int j = 0;
    for (size_t i = 0; i < size1; i++)
    {
        if (str1[i] == substr[j])
        {
            j++;
        }
    }
    if (j == size2)
    {
        return true;
    }
    return false;
}
int main(){
    const char * tmp = "hello there";
    const char * sub = "there";
    printf("%d",Includes(tmp,sub));
}