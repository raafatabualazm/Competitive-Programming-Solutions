#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x= 0b00010000;
    char y = 4;
    if (!(x & (1 << y))) printf("%s", "true");
    else printf("%s", "false");
    return 0;
}
