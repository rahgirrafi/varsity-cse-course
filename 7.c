#include <stdio.h>

void insertionSort(int arr[], int n) ;
void printarray(int arr[], int n);

int main() {
    int n;
    scanf("%d", &n);
    int arr1[n], arr2[n], arr3[2*n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < n; i++) {
        arr3[i]=arr1[i];
        arr3[i+n]=arr2[i];
    }
//I know merge sort is much more time efficient but amar abar eishob code khatay lekha lagbe ;-; So ei koyta element er jonno ami merge sort er otto boro function likhte raji na. No cap!
    for (int i = 1; i < n; i++) {
        int key = arr3[i];
        int j = i - 1;
        while (j >= 0 && arr3[j] < key) {
            arr3[j + 1] = arr3[j];
            j--;
        }
        arr3[j + 1] = key;
    }

    printarray(arr3,2*n);

}
//created this  function because amar bar bar array print korar jonno etto kichu likhte bhallge na -_-
void printarray(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
        if(i<n-1)
            printf(" ");
    }   
}

