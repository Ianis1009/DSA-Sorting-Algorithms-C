#include <stdio.h>

int partition ( int arr[], int low, int high) {

    int pivot = arr[high];
    int i = low - 1;
    for ( int j = low; j < high; j++ ) {
        if (arr[j] < pivot) {
            i++;
            int aux = arr[i];
            arr[i] = arr[j];
            arr[j] = aux;
        }
    }
    int aux = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = aux;
    return 1 + i;
}

void quickSort( int arr[], int low, int high) {

    if (low < high) { 

        int part = partition(arr, low, high);
        quickSort(arr, low, part- 1);
        quickSort(arr, part + 1, high);
    }

}

void printArray ( int arr[], int n ) {

    for (int i = 0; i < n; i++ ) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main () {


    int arr[] = {10, 8, 32, 2, 12, 1203};
    int n = sizeof(arr) / sizeof(int);

    printf("Vector initial: \n");
    printArray(arr, n);
    quickSort(arr, 0, n-1);
    printf("Vector sortat: \n");
    printArray(arr, n);
    return 0; 
}