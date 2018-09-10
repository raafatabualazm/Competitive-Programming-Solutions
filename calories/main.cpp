#include <iostream>
#include <string>
using namespace std;

int main()
{
    int cals[4];
    cin >> cals[0] >> cals[1] >> cals[2] >> cals[3];
    string squares;
    cin >> squares;
    int sum =0;
    int num =0;
    for (int i =0; i < squares.length(); i++) {
        num =0;
        num = squares[i] - '1';
        sum += cals[num];
    }
    cout << sum;
    return 0;
}
