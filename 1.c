#include <stdio.h>
int main(){
    int arr[50];
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }
        for (int i = 5; i >=0; i--)
    {
        printf("%d", arr[i]);
        if(i>0)
        printf(" ");
    }
}