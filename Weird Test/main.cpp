#include <iostream>

using namespace std;

int main()
{
    int x = -98;
    int y = x % 10;
    int z = (x -y) / 10;
    cout << x << " " << y << " " << z;
    return 0;
}
