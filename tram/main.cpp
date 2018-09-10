#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s, x1, x2;
    int t1, t2;
    int p, d;
    int time1, time2, time3;
    cin >> s >> x1 >> x2;
    cin >> t1 >> t2;
    cin >> p >> d;
    if (t2 < t1) {
         cout << abs(x1-x2) * t2;
    } else {
        time2 = abs(x1-x2) *t1;
        if (d == -1) {
            if (p > x1) {
                if (x2 < x1) {
                    time1 = abs(x2-p) *t1;
                } else if (x2 > x1) {
                    time1 = p*t1 + x1*t1 + abs(x1-x2)*t1;
                }
            } else if (p < x1) {
                if (x1 < x2) {
                    time1 = p*t1 + x1*t1 + abs(x1-x2) * t1;
                } else if (x1 > x2) {
                    time1 = p*t1 + s*t1 + x1*t1 + abs(x1-x2) *t1;
                }
            }
        } else if ( d == 1) {
            if (p > x1) {
                if (x2 < x1) {
                    time1 = abs(p-s)*t1 + abs(x2-s)*t1;

                } else if (x2 > x1) {
                    time1 = abs(p-s)*t1 + s*t1 + x2*t1;
                }
            } else if (p < x1) {
                if (x1 < x2) {
                    time1 = abs(x2-p)*t1;
                } else if (x1 > x2) {
                    time1 = abs(p-s)*t1 + abs(x2-s)*t1;
                }
            }
        }
    }
    cout << min(time1,time2);
    return 0;
}
