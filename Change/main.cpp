#include <iostream>

using namespace std;

int main()
{
    double totalMoney, inputAmt;
    int denom[] = {0, 0, 0, 0, 0}; //100 pt, 25 pt, 10 pt, 5 pt, 1 pt.
    cout <<  "Enter value (Floating points allowed) in EGP between 0 and 10: ";
    cin >> inputAmt;
    totalMoney = inputAmt * 100;
    while (totalMoney > 0)
    {
        if (totalMoney >= 100)
        {
            denom[0]++;
            totalMoney -= 100;
        }
        else if (totalMoney >= 25)
        {
            denom[1]++;
            totalMoney -= 25;
        }
        else if (totalMoney >= 10)
        {
            denom[2]++;
            totalMoney -= 10;
        }
        else if (totalMoney >= 5)
        {
            denom[3]++;
            totalMoney -= 5;
        }
        else if (totalMoney >= 1)
        {
            denom[4]++;
            totalMoney -= 1;
        }
    }
    cout << inputAmt << " consists of " << denom[0] << " pounds, " << denom[1] << " quarters, " << denom[2] << " dimes, " << denom[3] << " nickels, and " << denom[4] << " pennies" << endl;
    return 0;
}
