#include <stdio.h>

void ascending_insertion_sort(int arr[],int n);
void printarray(int arr[], int n);
void insert(int arr[],int elem, int *total);

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int b;
    scanf("%d", &b);
    insert(arr,b, &n);
    ascending_insertion_sort(arr,n);

    printarray(arr,n);
}

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

void insert(int arr[],int elem, int *total)
{
    int i = *total;
    arr[i] = elem;
    *total = (*total)+1;
}

void printarray(int arr[],int n)
{
        for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
        if(i<n-1)
            printf(" ");
    }
}