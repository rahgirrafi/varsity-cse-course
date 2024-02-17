#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int frequency[n];
    for (int i = 0; i < n; i++) {
        frequency[i] = -5; 
    }

    for (int i = 0; i < n; i++) {
        int count = 1;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                frequency[j] = 0;  // Mark the element as counted
            }
        }

        if (frequency[i] != 0) {
            frequency[i] = count;
        }
    }

    // Display frequency of each element
    for (int i = 0; i < n; i++) {
        if (frequency[i] != 0) {
            printf("%d:%d\n", arr[i], frequency[i]);
        }
    }

    return 0;
}

