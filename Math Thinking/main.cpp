#include <iostream>

using namespace std;

int main()
{
    for (int i =0; i <= 100; i++)
    {
        if ((i % 4 == 3) && (i % 5 == 4) && (i % 3 == 2))
        {
            cout << i;
        }
    }
    return 0;
}
