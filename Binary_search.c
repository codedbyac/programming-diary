#include <stdio.h>

// Main function: Implements binary search to find a key in a sorted array
int main() {
    int arr[]  = {2, 3, 6, 9, 12, 15}; // Sorted array
    int size = 6;                      // Size of the array
    int start = 0;                     // Starting index for binary search
    int end = size - 1;                // Ending index for binary search
    int mid = (start + end) / 2;       // Initial middle index
    int key = 12;                      // Value to be searched in the array

    // Binary search loop
    while (start <= end) {
        if (arr[mid] == key) {
            return mid; // Key found, return index (Note: return inside main doesn't print anything)
        }

        if (key >= arr[mid]) {
            start = mid + 1; // Search in the right half
        } else {
            end = mid - 1;   // Search in the left half
        }

        mid = (start + end) / 2; // Update middle index
    }

    return -1; // Key not found in the array
}

