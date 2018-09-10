#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 3;
    int z = x + x++;
    printf("%d", z);
    return 0;
}
