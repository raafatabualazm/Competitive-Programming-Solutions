#include <bits/stdc++.h>

using namespace std;

int main()
{
    multimap<int, int> mp;
    int n, a ,b;
    cin >> n;
    for (int i =0; i < n; i++) {
        cin >> a >> b;
        mp.insert({b, a});
    }
    reverse(mp.begin(), mp.end());
    int curr = -3, ans =-1;
    for (auto i: mp) {
        if (i.first > curr) ans++;
    }
    return 0;
}
