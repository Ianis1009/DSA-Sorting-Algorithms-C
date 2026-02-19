#include <stdio.h>

void selectionSort ( int arr[], int n ) {

    for (int i = 0; i < n - 1; i++ ) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++ ) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void printArray(int arr[], int n) {

    for (int i = 0; i < n; i++ ) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main () {

    int arr[] = {29, 10, 14, 37, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Vector inainte de sortare: \n");
    printArray(arr, n);
    selectionSort(arr, n);
    printf("Vector sortat: \n");
    printArray(arr, n);
    return 0; 
}