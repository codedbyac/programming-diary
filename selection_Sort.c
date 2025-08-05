#include <stdio.h>

int main() {
    int arr[] = {4, 8, 2, 7, 5};
    int i, j, minindex, temp;
    int n = 5;  // size of the array

    for (i = 0; i < n - 1; i++) {
        minindex = i;

        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minindex]) {
                minindex = j;
            }
        }

        // Swap arr[i] and arr[minindex]
        temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;
    }

    // Print sorted array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

