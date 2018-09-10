#include <iostream>

using namespace std;

void bin(int x) {
    if (x == 0) {
        cout << 0;
        return;
    }

    bin(x/2);
    cout << x%2;
}
int main()
{


    bin(7);
    printf("\n%d", 'y');
    return 0;
}
