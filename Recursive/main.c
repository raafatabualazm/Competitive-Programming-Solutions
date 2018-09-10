#include <stdio.h>
#include <stdlib.h>

int power(int b, int p);
unsigned long long factorial(unsigned long long fact);
void increment(int* z);

int main()
{
    int z = 3;
    unsigned long long x;
    x = power(2, 4);
    printf("%d\n", x);
    unsigned long long y = factorial(20);
    printf("%lld\n", y);
    increment(&z);
    printf("%d", z);
    return 0;
}

int power(int b, int p) {
    //int m =0;
    //printf("%d", b);
    if (p != 0)
        return b * power(b, p-1);
    else
        return 1;
}

unsigned long long factorial(unsigned long long fact) {
    if (fact == 0) return 1;
    else fact *= factorial(fact -1);
}

void increment(int* z) {
    (*z)++;
}
