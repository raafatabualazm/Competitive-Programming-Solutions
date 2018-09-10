#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
unsigned long long factorial(int x) {
unsigned long long denom =1;
for (int i = 1; i <= x; i++) {
        denom *= i;
    }

    return denom;

}

long double expo(double x) {
   long double res = 1;
   for (int i =0; i < x; i++) {
    res += (double)1/factorial(i+1);
   }
    return res;

}

int main()
{
    cout << setprecision(30);
    cout << expo(30)<< endl;
    return 0;
}
