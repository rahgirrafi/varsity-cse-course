#include <stdio.h>
void printarray(int arr[], int n);

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = n-2; i >=0 ; i--) {
        int key = arr[i];
        int j = i +1;
        while (j <n && key > arr[j]) {
            arr[j-1] = arr[j];
            j++;  
        }
        arr[j-1] = key;  
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
        if(i<n-1)
            printf(" ");
    }   
}