#include <stdio.h>
#include <stdlib.h>

// LIFO sequence (stack)
struct Stack {
    struct Stack* prev;
    int value;
};

// FIFO sequence (queue)
struct Queue {
    struct Queue* next;
    int value;
};

struct Stack* stack_last = NULL;

struct Queue* queue_first = NULL;
struct Queue* queue_last = NULL;

void stack_append(int value) {
    struct Stack* elem = (struct Stack*)malloc(sizeof(struct Stack));


    if ( stack_last != NULL ) {
        elem->prev = stack_last;
    } else {
        elem->prev = NULL;
    }

    elem->value = value;
    stack_last = elem;
}

void queue_append(int value) {
    struct Queue* elem = (struct Queue*)malloc(sizeof(struct Queue));

    if ( queue_first == NULL ) {
        queue_first = elem;
        queue_last = elem;
        elem->next = NULL;
        elem->value = value;
        return;
    }

    queue_last->next = elem;
    elem->value = value;
    elem->next = NULL;
    queue_last = elem;
}

void print_stack() {
    for ( struct Stack* cur = stack_last; ; cur = cur->prev ) {
        if ( cur->prev != NULL ) {
            printf("%d ", cur->value);
        } else {
            printf("%d\n", cur->value);
            break;
        }
    }
}

void print_queue() {
    for ( struct Queue* cur = queue_first; ; cur = cur->next ) {
        if ( cur->next != NULL ) {
            printf("%d ", cur->value);
        } else {
            printf("%d\n", cur->value);
            break;
        }
    }
}


int main() {
    stack_append(1);
    stack_append(2);
    stack_append(3);
    print_stack();

    queue_append(1);
    queue_append(2);
    queue_append(3);
    print_queue();

    return 0;
}

// TODO:
// bidirectional list
// memory leaks (stack/queue cases)
// iterators
// free
