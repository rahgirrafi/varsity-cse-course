#include <stdio.h>
void printarray(int arr[], int n);
void pop(int arr[], int indice, int *total);
int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
  
    int b;
    scanf("%d", &b);
    pop(arr,b,&n);
 
    printarray(arr,n);
}

void pop(int arr[], int indice, int *total)
{
    for (int i = indice-1; i < *total; i++)
    {
        arr[i] = arr[i+1];
    }
    *total = *total -1;
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
