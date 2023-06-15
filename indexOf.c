#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int indexOf(const char * str, const char * substr, int index){
    int size1 = strlen(str);
    int size2 = strlen(substr);
    if (index < 0 )
    {
        index = 0;
    }
    if (index > size1)
    {
        return -1;
    }
    int j = 0;
    int pos = -1;
    for (int i = index; i < size1; i++)
    {
        if (str[i] == substr[j])
        {
            pos = i;
            j++;
        }

        
    }
        if (j == size2)
        {
            pos-=j-1;
            return pos;
        }
    return -1;
    
}
int main(){
    const char * tmp = "therehello there";
    const char * sub = "there";
    printf("%d",indexOf(tmp,sub,-799));
}