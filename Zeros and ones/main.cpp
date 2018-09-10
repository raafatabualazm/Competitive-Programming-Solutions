#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    string num;
    cin >> n;
    cin >> num;
    int ans = n - 2* min(count(num.begin(), num.end(), '1'), count(num.begin(), num.end(), '0'));
    cout << ans;
    return 0;
}
