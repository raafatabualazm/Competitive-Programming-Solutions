#include <stdio.h>
#include <stdlib.h>



void add(int *z) {
    printf("%d", z[1]);
    z[2] = 5;
}

void add2(int z[]) {
    printf("%d", z[0]);
}

void multdim(int a[][7]) {

}
int main()
{
    int z[3] = {1, 2 ,3};
    add(z);
    add2(z);
    printf("%d", z[2]);
    return 0;
}
