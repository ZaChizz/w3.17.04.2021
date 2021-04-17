#include <iostream>

#define MAX_CELL 100

int main() {
    int maxJump = 5, cell = 8;
    unsigned long long ways[MAX_CELL];

    for (int i = 0; i < maxJump; i++ ) {
        ways[i] = 1 << i;
    }

    for (int i = maxJump; i < cell; i++ ) {
        unsigned long long way = 0;

        for ( int j = i - maxJump; j < i; j++ ) {
            way += ways[j];
        }

        ways[i] = way;
    }

    std::cout << ways[cell-1] << std::endl;

    return 0;
}
