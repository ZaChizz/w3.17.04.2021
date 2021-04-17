#include <stdio.h>

#define LEN 10

void merge(int array[], int lo, int mid, int hi) {
    int buffer[hi-lo];
    int i = lo;
    int j = mid;
    int k = 0;

    for ( ; i < mid && j < hi; k++ ) {
        if ( array[i] < array[j] ) {
            buffer[k] = array[i];
            i += 1;
        } else {
            buffer[k] = array[j];
            j += 1;
        }
    }
    for ( ; i < mid; i++, k++ ) {
        buffer[k] = array[i];
    }
    for ( ; j < hi; j++, k++ ) {
        buffer[k] = array[j];
    }

    for ( int i = lo, k = 0; i < hi; i++, k++ ) {
        array[i] = buffer[k];
    }
}

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

void mergeSort(int array[], int start, int end) {
    int middle = (start + end) / 2;

    if ( start < middle ) {
        printf("RECURSION CALL => start:%d middle:%d end:%d\n", start, middle, end);
        mergeSort(array, start, middle);
        mergeSort(array, middle, end);
        printf("MERGE CALL => start:%d middle:%d end:%d\n", start, middle, end);
        merge(array, start, middle, end);
    }
}


int main() {
    int array[LEN] = {10, 3, 7, 1, 6, 9, 2, 4, 8, 5};

    arrayPrint(array, LEN);

    mergeSort(array, 0, LEN);

    arrayPrint(array, LEN);

    return 0;
}

// should be: 1 2 3 3 4 4 5 5 6 7
