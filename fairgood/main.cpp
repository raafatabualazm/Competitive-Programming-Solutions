#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string name;
    int before;
    int after;
    bool good = false;
    while(n--) {
        cin >> name >> before >> after;
        if (before >= 2400) {
            if (after > before) {
                good = true;

            }
        }
    }

    if (good) cout << "YES";
    else cout << "NO";
    return 0;
}
