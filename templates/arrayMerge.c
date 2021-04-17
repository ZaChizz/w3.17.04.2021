#include <stdio.h>

void arrayMerge(int target[], int src1[], int len1, int src2[], int len2) {
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
    int src1[10] = {1, 2, 3, 4, 4, 5, 6, 7, 7, 8};
    int src2[10] = {1, 2, 5, 6, 7, 8, 9, 10, 11, 12};

    int target[20];

    arrayMerge(target, src1, 10, src2, 10);
    arrayPrint(target, 20);

    return 0;
}

// should be: 1, 1, 2, 2, 3, 4, 4, 5, 5, 6, 6, 7, 7, 7, 8, 8, 9, 10, 11, 12