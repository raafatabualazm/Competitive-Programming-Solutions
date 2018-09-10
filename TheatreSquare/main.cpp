#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    long double m, n, a;
    cin >> m >> n >> a;
    long long numW =ceil((m / a));
    long long numL =ceil(( n / a));

    cout << numL * numW;
    return 0;
}
