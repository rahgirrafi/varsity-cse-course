#include <stdio.h>
int main(){
    int arr[50],n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max =0;
    int min =10000;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]> max)
            max = arr[i];
        if(arr[i]<min)
            min= arr[i];
    }
    printf("Max:%d\nMin:%d",max,min);
    

}
