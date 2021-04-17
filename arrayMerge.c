#include <stdio.h>

void arrayMerge(int target[], int src1[], int len1, int src2[], int len2) {
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
    const int len1 = 10, len2 = 10;
    int src1[len1] = {1, 2, 3, 4, 4, 5, 6, 7, 7, 8};
    int src2[len2] = {1, 2, 5, 6, 7, 8, 9, 10, 11, 12};
    int target[len1+len2];

    arrayMerge(target, src1, len1, src2, len2);
    arrayPrint(target, len2+len1);

    return 0;
}

// should be: 1, 1, 2, 2, 3, 4, 4, 5, 5, 6, 6, 7, 7, 7, 8, 8, 9, 10, 11, 12