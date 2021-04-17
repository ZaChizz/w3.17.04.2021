#include <stdio.h>

void merge(int array[], int lo, int mid, int hi) {
    // code should be here
}

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

int main() {
    int array[10] = {1,2,3,4,5,3,4,5,6,7};

    merge(array, 0, 5, 10);
    arrayPrint(array, 10);

    return 0;
}

// should be: 1 2 3 3 4 4 5 5 6 7
