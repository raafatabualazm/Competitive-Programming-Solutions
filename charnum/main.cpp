#include <iostream>

using namespace std;

int main()
{
    int counter = 0;
    char input[5];
    for (int i =0; i < 5; i++) {
        cin >> input[i];
    }
    for (int j =0; j < 5; j++) {
        if (input[j] >= '0' && input[j] <= '9') counter++;
    }

    cout << "Number of numbers is: " << counter;

    return 0;
}
