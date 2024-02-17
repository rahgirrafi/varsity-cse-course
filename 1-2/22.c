#include <stdio.h>
#include <string.h>
int main(){
    char str[50],i;
    fgets(str,50,stdin);
    int end = strlen(str);
    for(int i =end;i>=0;i--)
    {
        printf("%c", str[i]);
        if(i>0)
            printf(" ");
    }


}