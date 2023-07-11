#include <stdio.h>
#include "stack.h"
#include "queue.h"
#include <stdlib.h>

int * newInt(int a) {
    int * b = (int*)malloc(sizeof(int));
    *b = a;
    return b;
}

int main() {
    Queue q = queueNew();
    queuePush(&q, newInt(4));
    queuePush(&q, newInt(7));
    int * a = (int*)queuePop(&q);
    printf("%d\n", *a);
    free(a);
    queuePush(&q, newInt(6));
    queuePush(&q, newInt(12));
    queuePush(&q, newInt(567));
    while ((a = (int*)queuePop(&q))) {
        printf("%d\n", *a);
        free(a);
    }
    return 0;
}