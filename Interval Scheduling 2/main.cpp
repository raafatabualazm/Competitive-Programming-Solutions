#include <bits/stdc++.h>

using namespace std;

int main()
{
    multimap<int, int> mp;
    int n;
    cin >> n;
    int a, b;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        mp.insert({b, a});
    }
    int curr = -1, ans =0;
    for (auto i: mp) {
        if (curr <= i.second) {
            ans++;
            curr = i.first;
        }
    }

    cout << ans;
    return 0;
}
