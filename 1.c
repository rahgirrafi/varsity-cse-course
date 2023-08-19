#include <stdio.h>
int main(){
    int n;
scanf("%d",&n);
    int arr[n];
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