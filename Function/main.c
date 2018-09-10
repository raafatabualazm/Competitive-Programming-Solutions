#include <stdio.h>
#include <stdlib.h>
#include "add.h"
//int add(int, int);

//int add(int i, int j) {
//    return i + j;
//
//}
int main()
{
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    int sum = add(x,y);
    printf("Their sum: %d", sum);
    return 0;
}


//int add(int i, int j) {
//    return i + j;
//
//}
