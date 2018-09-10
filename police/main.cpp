#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    int sum =0;
    int in =0;
    int po =0;
    int crime =0;
    cin >> n;
    while (n--) {
        cin >> in;
        if ( in > 0) {

         po += in;
        }
         else if (in == -1 && po >0) {
          po--;
        } else sum++;
    }
    cout << sum;
    return 0;
}
