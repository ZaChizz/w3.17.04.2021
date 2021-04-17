#include <stdio.h>

void arrayMerge(int target[], int src1[], int len1, int src2[], int len2) {
    int i = 0, j = 0, k = 0;

    for ( ; i < len1 && j < len2; k++ ) {
        if ( src1[i] < src2[j] ) {
            target[k] = src1[i];
            i += 1;
        } else {
            target[k] = src2[j];
            j += 1;
        }
    }

    for ( ; i < len1; i++, k++ ) {
        target[k] = src1[i];
    }
    for ( ; j < len2; j++, k++ ) {
        target[k] = src2[j];
    }
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