#include <iostream>

using namespace std;

int main()
{
    bool return_north;
    int valid = true;
    int n, d=0;
    cin >> n;
    int v;
    string dir;
    while (n--) {
        cin >> v >> dir;
        if (d == 0 && dir != "South") {
            valid = false;
            break;
        } if (d == 0 && dir != "North") {
            valid = false;
            break;
        } else {
            if (dir == "North") d -= v;
            else if (dir == "South") d +=v;
            if ( d < 0) {
                valid = false;
                break;
            } else if (d > 20000) {
                valid = false;
                break;
            }
        }
    }
    if (d ==0) return_north = true;
    else return_north = false;
    if (valid && return_north) cout << "YES";
    else cout << "NO";
    return 0;
}
