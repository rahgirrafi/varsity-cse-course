#include <stdio.h>

void ascending_insertion_sort(int arr[],int n)
{
        for (int i = n-2; i >=0 ; i--) {
        int key = arr[i];
        int j = i +1;
        while (j <n && key > arr[j]) {
            arr[j-1] = arr[j];
            j++;  
        }
        arr[j-1] = key;  
    }
}

int binary_search(int arr[],int low,int high, int x){
    int mid = (low+high)/2;
    if (x==arr[mid])
    {
        return mid;
    }
    else if(x>arr[mid])
    {
        binary_search(arr,mid+1,high,x);
    }
    else
    {
        binary_search(arr,low,mid,x);
    }
    

}

int main(){
    int n, x;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    ascending_insertion_sort(arr,n);
    printf("%d", binary_search(arr,0,n,x));
    

    
}