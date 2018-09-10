#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("Type a number: ");
    scanf("%d", &i);
    int z[i];
    printf("Size of \'z\' is %llu\n", sizeof(z));

    int m,f;
    printf("Type a number: ");
    scanf("%d", &m);
    int* x = (int*)malloc(i * sizeof(int));
    x[0] = 1;
    printf("x[0] = %d\n", x[0]);

    int** l = (int**)malloc(sizeof(int**) * i);
    printf("Number of columns: ");
    scanf("%d", &f);
    for (int j =0; j < i; j++) {
        l[j] = (int*)malloc(sizeof(int*)* f);
    }
    l[0][0] = 3;
    printf("l[0][0] = %d\n", l[0][0]);

    free(x);

    return 0;
}
