#include <iostream>

using namespace std;

int main()
{
    int price, coin;
    cin >> price >> coin;
    int n =0;
    int total_sum =0;
    while (true) {
        n++;
        total_sum = n * price;
        if (total_sum % 10 == 0) {
            break;
        } else {
            total_sum -= coin;
            if (total_sum % 10 == 0) {
                break;
            }
        }
    }
    cout <<n;
    return 0;
}
