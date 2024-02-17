#include <stdio.h>
#define MAXSIZE 20
int main(){
    char *str;
    fgets(str,MAXSIZE,stdin);

    for(int i =0; ;i++)
    {
        if(str[i] == '\n')
        {
            printf("%d", i);
            break;
        }
    }
}