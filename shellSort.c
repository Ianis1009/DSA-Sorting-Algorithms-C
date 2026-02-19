#include <stdio.h>

void shellSort ( int arr[], int n) {

    for ( int gap = n / 2; gap > 0; gap /= 2 ) {
        for ( int i = gap; i < n; i++ ) {
            int tmp = arr[i];
            int j ;
            for (j = i; j >= gap && arr[j-gap] > tmp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = tmp;
        }
    } 
}


void printArray(int arr[], int n) {
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {12, 34, 54, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Vector initial:\n");
    printArray(arr,n);

    shellSort(arr,n);

    printf("Vector sortat:\n");
    printArray(arr,n);
    return 0;
}