#include <stdio.h>

#define LEN 10

int partition(int array[], int start, int end) {
    // your code should be here
}

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

int main() {
    int array[LEN] = {10, 3, 7, 1, 6, 9, 2, 4, 8, 5};
    int index = partition(array, 0, LEN-1);

    printf("index: %d\n", index);
    arrayPrint(array, LEN);

    return 0;
}

// should be:
// index: 5
//
