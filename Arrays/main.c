#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main()
{
    int total =0;
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7 , 8 , 9 , 10};
    for (int i =0; i < SIZE; i++) {
        total += arr[i];
    }
    printf("%d\n", total);

    char* z[2] = {"Ahmed", "Alaa"};
    printf("%s\n", z[0]);

    int x[2][3] = {1,2,3,4,5,6};
    printf("%p\n", x);
    printf("%p\n", (x+1));
    printf("%p\n", x[1]+2);
    printf("%p\n", &x[1][2]);


    return 0;
}
