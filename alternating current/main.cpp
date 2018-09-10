#include <iostream>
#include <string>
using namespace std;

int main()
{
    string signs;
    cin >> signs;
    int counter =0;
    if (signs.size() == 1) cout << "No";
    else if (signs.size() == 2) {
        int pos = signs.end() -signs.begin() -1;
        if( signs.at(pos) == signs[0]) cout << "Yes";
    } else {
        for (int i =1; i <signs.size(); i++) {
            if (signs[i] == signs[i-1]) counter++;
        }
        if (counter >= 2) cout << "No";
    }
    return 0;
}
