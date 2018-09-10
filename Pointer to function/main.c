#include <stdio.h>
#include <stdlib.h>
char (*ptr)(char x);
char func_arth(char x) {
    return x*2;
}
int main()
{
    char x;
    ptr = func_arth;
    x = ptr(3);
    printf("%d", x);
    return 0;
}
