#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool north_return;
    bool valid;
    int n,d =0;
    cin >> n;
    pair <int, string> directions[n];
    for (int i =0; i <n; i++) {
        cin >> directions[i].first >> directions[i].second;
    }
    for (int i =0; i<n; i++) {
        if (d == 0 || d == 20000) {
        if (d == 0 && directions[i].second == "South") {
            valid = true;
            d += directions[i].first;
             if ( d > 20000) {
                valid = false;
                break;
            } else if ( d < 0) {
                valid = false;
                break;
            }
        } else if (d == 20000 && directions[i].second == "North") {
            valid = true;
            d -= directions[i].first;
             if ( d > 20000) {
                valid = false;
                break;
            } else if ( d < 0) {
                valid = false;
                break;
            }
        } else {
            valid = false;
            break;
        }
        } else {
            if (directions[i].second == "South") d += directions[i].first;
            else if (directions[i].second == "North") d -= directions[i].first;
            if ( d > 20000) {
                valid = false;
                break;
            } else if ( d < 0) {
                valid = false;
                break;
            }
        }
    }

        if (d ==0) north_return = true;
        else north_return = false;

    if (valid && north_return) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
