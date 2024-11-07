#include <stdio.h>

// Function to perform bubble sort in ascending order and return swap count
int bubbleSortAscending(int arr[], int n) {
    int i, j, temp;
    int swapCount = 0;

    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapCount++;
            }
        }
    }
    return swapCount;
}

// Function to perform bubble sort in descending order and return swap count
int bubbleSortDescending(int arr[], int n) {
    int i, j, temp;
    int swapCount = 0;

    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapCount++;
            }
        }
    }
    return swapCount;
}

int main() {
    int n, i;
    
    // Taking the array size as input
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Taking array elements as input
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Create copies of the original array for both sorts
    int ascArr[n], descArr[n];
    for (i = 0; i < n; i++) {
        ascArr[i] = arr[i];
        descArr[i] = arr[i];
    }

    // Calculate the number of swaps for ascending and descending orders
    int ascSwaps = bubbleSortAscending(ascArr, n);
    int descSwaps = bubbleSortDescending(descArr, n);
    
    // Print the minimum number of swaps
    printf("%d\n", (ascSwaps < descSwaps) ? ascSwaps : descSwaps);

    return 0;
}
