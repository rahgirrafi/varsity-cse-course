#include <stdio.h>

void printarray(int arr[], int n);
void insertelements(int arr[], int n);

int main() {
    int n, jor_indicer = 0, bijor_indicer=0;
    scanf("%d", &n);
    int arr[n], jor_arr[n], bijor_arr[2*n];

    insertelements(arr,n);
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2==0)
        {
            jor_arr[jor_indicer]=arr[i];
            jor_indicer++;
        }
        else{
            bijor_arr[bijor_indicer]=arr[i];
            bijor_indicer++;
        }
    }

    printarray(jor_arr,jor_indicer);
    printf("\n");
    printarray(bijor_arr,bijor_indicer);


}
//created this  function because amar bar bar etto kichu likhte bhallge na -_-
void printarray(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
        if(i<n-1)
            printf(" ");
    }   
}

void insertelements(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    
}

