#include <iostream>

using namespace std;
int log_calc(int base, int result) {
   // bool in_loop = true;
    double prod =1, exponent = 0;
    while(prod < result) {
        prod *= base;
        exponent++;
    }
    if (prod == result)
        return exponent;
    else
         return false;

}
int main()
{
    if (log_calc(2,8)) {
        cout << log_calc(2,8);
    } else {
        cout << "No power";
    }

    return 0;
}
