#include <stdio.h>
#include <string.h>
 //parenthesis matching using stack 

 int main(){
    char str[50],i;
    fgets(str,50,stdin);
    short int x = 1;
    int len = strlen(str);
    for(i=0;i<len;i++)
    {
        for(int i=0; i<len; i++){
            if(str[i]== '(' && str[len-i] == ')' || str[i]== '[' && str[len-i] == ']' || str[i]== '{' && str[len-i] == '}' ){
                x = 1;
            }
            else{
                x = 0;
            }
        }
    }
    printf("%s",x?"True\n":"False\n");
 }