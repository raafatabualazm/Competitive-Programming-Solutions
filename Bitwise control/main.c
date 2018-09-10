#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x1 = 0;
    char x2 = 5;

    // Setting a bit
    x1 |= (1 << 3);

    // Toggle a bit
    x2 ^= (1 << 3);

    printf("New x1: %d and new x2: %d", x1, x2);
    return 0;
}
