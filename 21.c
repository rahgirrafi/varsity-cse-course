#include <stdio.h>
int main(){
    char str[50];
    fgets(str,50,stdin);

    for(int i =0; ;i++)
    {
        if(str[i] == '\n')
        {
            printf("%d", i);
            break;
        }
    }
}