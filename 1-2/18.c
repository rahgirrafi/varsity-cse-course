#include <stdio.h>

void printarray(int arr[],int n)
{
        for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
        if(i<n-1)
            printf(" ");
    }
}

int main(){
    int n1,n2;
    scanf("%d %d", &n1, &n2);
    int arr1[n1],arr2[n2],arr3[n1+n2];
    for (int i = 0; i < n1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        scanf("%d",&arr2[i]);
    }
    int indicer = 0, i = 0 , j = 0;
    
    while(indicer < (n1+n2))
    {

            if(arr1[i]<=arr2[j])
            {
                arr3[indicer] = arr1[i];
                indicer++;
                i++;
                if(i>=n1)
                {
                    while(i>=n1 && j<n2)
                    {
                        arr3[indicer] = arr1[j];
                        j++;
                        indicer++;
                    }
                    
                }
            }
            else{
                arr3[indicer] = arr2[j];
                indicer++;
                j++;
                while(j>=n2 && i<n1)
                    {
                        arr3[indicer] = arr1[i];
                        i++;
                        indicer++;
                    }
            }
        }

        
    
    
    printarray(arr3,n1+n2);

}