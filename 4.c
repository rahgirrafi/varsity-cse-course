#include <stdio.h>
#include<stdbool.h>
int is_present(int *arr[],int elementNnm, int check);
int main(){
    int arr[50],n,arr2[20], *ptr;
    bool is_present =false;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 20; i++)
    {
        arr2[i]=0;
    }
    int ind=0;
    for(int i =0; i<n; i++)
    {
        for(int j=0; j<20;j++)
        {
            if(arr2[j]==arr[i])
                {
                    is_present=true;
                    break;
                }
            if(j == 20-1)
                is_present=false;
        }
        if(!is_present)
        {
            arr2[ind]=arr[i];
            ind++;
        }
    }
    for (int i = 0; i <= ind; i++)
    {
        printf("%d ",arr2[i]);
    }
    
}
