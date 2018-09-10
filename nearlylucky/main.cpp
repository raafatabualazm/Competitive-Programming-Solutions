#include <iostream>

using namespace std;

int main()
{
    string input;
    int counter =0;
    cin >> input;
    for (int i =0; i < input.length(); i++) {
        if (input[i] == '4' || input[i] == '7') counter++;
    }
    if (counter == 7 || counter == 4) cout << "YES";
    else cout << "NO";
    return 0;
}
