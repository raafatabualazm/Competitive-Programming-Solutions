#include <bits/stdc++.h>

using namespace std;

int main()
{
    int males[368];
    int females[368];
    int n;
    char g;
    int s, f;
    int max_num =0;
    int small;
    cin >> n;
    for (int i =0; i < n; i++) {
        cin >> g >> s >> f;
        if (g == 'M') {
            males[s]++;
            males[f+1]--;
        } else {
            males[s]++;
            males[f+1]--;
        }
    }

    for (int i =1; i < 368; i++) {
        males[i] += males[i-1];
        females[i] += females[i-1];
    }
    for (int i =0; i < 368; i++) {
       small = min(males[i], females[i]);
       max_num = max(max_num, small);
    }

    cout << 2 * max_num;


    return 0;
}
