#include <stdio.h>
#include <stdbool.h>
int main() {
    int n, duplicate;
    scanf("%d", &n);

    int marker[n];

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        marker[i]= 1;
    }
bool unique = true;

    for (int i = 0; i < n; i++)
    {
        unique = true;
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                marker[j]= 0;
                unique = false;
            }
            
        }
        if(unique==false)
        {
            marker[i] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if(marker[i] == 1)
            printf("%d",arr[i]);
        if(i< n-1)
            printf(" ");
    }   
    return 0;
}






