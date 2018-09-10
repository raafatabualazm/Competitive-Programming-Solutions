#include <stdio.h>
#include <stdlib.h>
typedef struct {
 int key;
} element;
element stack[100];
void push(int* top, element item) {
    if (*top == 99) {
        return;
    } else {
        stack[++(*top)] = item;
        printf("Stack of %d is %d\n", *top, item.key);
    }
}
element pop(int *top) {
    if (*top == -1) {
        return;
    } else {
        return stack[(*top)--];
    }

}

int main()
{

    int top = -1;
    element x;
    x.key= 9;
    element y;
    y.key= 8;
    element z;
    z.key= 17;
    push(&top, x);
    printf("top is: %d\n", top);
    push(&top, y);
    printf("top is: %d\n", top);
    push(&top, z);
    printf("top is: %d\n", top);
    pop(&top);
    for (int i = 0; i <= top; i++) {
        printf("Value %d in stack is %d\n", i, stack[i].key);
    }

    printf("top is: %d\n", top);
    return 0;
}
