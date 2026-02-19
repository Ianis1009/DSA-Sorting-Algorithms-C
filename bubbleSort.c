#include <stdio.h>

void bubbleSort ( int arr[], int n ) {
    
    for (int i = 0; i < n - 1; i++ ) {
        for (int j = i + 1; j < n; j++ ) {
            if (arr[i] > arr[j]) {
                int aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }

}

void printArray (int arr[], int n) {

    for (int i = 0; i < n; i++ ) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main () {

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(int);

    printf("Vector inainte de sortare: \n");
    printArray(arr, n);
    bubbleSort(arr, n);
    printf("Vector dupa sortare: \n");
    printArray(arr, n);
    return 0;
}