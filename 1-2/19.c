#include <stdio.h>

int main(){
    int n, x;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d", &x);

    for (int i = x; ; i++)
    {
       if(i>=n)
       {
        i=0;
       }
       printf("%d", arr[i]);
       if(i != x-1)
        printf(" ");
       if(i == x-1)
        break;

    }
    

}