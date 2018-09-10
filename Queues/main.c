#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int key;
} queue;
queue queues[100];
void enqueue(int* rear, queue item) {
    if (*rear == 99) {
        return;
    } else {
        queues[++(*rear)] = item;
    }
}

queue dequeue(int* front, int rear) {
    if(*front == rear) return;
    else {
        return queues[++(*front)];
    }
}
int main()
{
    int front =-1, rear = -1;
    queue x;
    x.key = 1;
    enqueue(&rear, x);
    queue y;
    y.key = 2;
    enqueue(&rear, y);
    queue z;
    z.key = 3;
    enqueue(&rear, z);
    for (int i =front+1; i <= rear; i++) {
        printf("Value of Queue at %d is %d\n", i, queues[i].key);
    }
    dequeue(&front, rear);
    for (int i =front+1; i <= rear; i++) {
        printf("Value of Queue at %d is %d\n", i, queues[i].key);
    }
    return 0;
}
