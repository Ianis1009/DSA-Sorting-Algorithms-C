#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void insertionSort ( int bucket[], int size ) {

    for ( int i = 1; i < size; i++ ) {
        int key = bucket[i];
        int j = i - 1;

        while (j >= 0 && bucket[j] > key) {
            bucket[j + 1] = bucket[j];
            j--;
        }
        bucket[j + 1] = key;
    }
}


void bucketSort ( int arr[], int n ) {

    if (n <= 0)
        return ;
    
    int i, j;
    int max = arr[0];
    int min = arr[0];

    for (i = 1; i < n; i++ ) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    int bucketCount = 10;
    int range = (max - min + 1);
    int buckets[10][MAX];
    int bucketSize[10] = {0};

    for (i = 0; i < n; i++ ) {
        int index = (arr[i] - min) * bucketCount / range;

        if (index == bucketCount) index--;

        buckets[index][bucketSize[index]++] = arr[i];

    }

    for ( i = 0; i < bucketCount; i++ ) {
        if (bucketSize[i] > 0)
            insertionSort(buckets[i], bucketSize[i]);
    }

    int k = 0;
    for ( i = 0; i < bucketCount; i++ ) {
        for (j = 0; j < bucketSize[i]; j++ ) {
            arr[k++] = buckets[i][j];
        }
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {29, 25, 3, 49, 9, 37, 21, 43};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Vector initial:\n");
    printArray(arr, n);

    bucketSort(arr, n);

    printf("Vector sortat:\n");
    printArray(arr, n);

    return 0;
}