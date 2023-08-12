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
        marker[i]= -1;
    }
    bool is_duplicate = false;

    for (int i = 0; i < n; i++)
    {
        is_duplicate = false;
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                marker[j]= 0;
                is_duplicate = true;
            }
            
        }
        if(marker[i]!= 0 && is_duplicate==true)
        {
            marker[i] = 1;
        }
    }

    int count =0;
     for (int i = 0; i < n; i++)
     {
        if(marker[i] ==1)
            count++;
     }
     
     printf("%d",count);

    return 0;
}


