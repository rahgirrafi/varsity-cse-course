#include <stdio.h>
 //parenthesis matching. 

 int main(){
    char str[50],i;
    fgets(str,50,stdin);
    short int x = 1;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='(')
        {
            if(str[i+1]==')')

                i++;
            else
                x = 0;
        }
        else if(str[i]=='[')
        {
            if(str[i+1]==']')
                i++;
            else
                x= 0;              
        }
        else if(str[i]=='{')
        {
            if(str[i+1]=='}')
                i++;
            else
                x = 0;              
        }
    }
    if(str[i]=='}' || str[i]==']' || str[i]==')')
        x = 0;

    printf("%s", x ? "True\n":"False\n" );
 }