#include <stdio.h>

#define MAX_CELL 100

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int maxJump, cell;
    unsigned long long ways[MAX_CELL];

    fscanf(in, "%d %d", &maxJump, &cell);

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

    fprintf(out, "%llu\n", ways[cell-1]);

    return 0;
}
