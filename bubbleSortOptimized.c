#include <stdio.h>

void bubbleSortOptimized ( int arr[], int n) {

    int swapped;
    for (int i = 0; i < n - 1; i++ ) {
        swapped = 0;
        for (int j = 0; j < n - i - 1; j++ ) {
            if (arr[j] > arr[j+1]) {
                int aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
                swapped = 1;
            }
        }

        if (!swapped) 
            break;
    }
}

void printArray( int arr[], int n) {
    for (int i = 0; i < n; i++ ){ 
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main () 
{

    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Vector inainte de sortare: ");
    printArray(arr, n);
    bubbleSortOptimized(arr, n);
    printf("Vector dupa sortare: ");
    printArray(arr, n);
    return 0; 
}