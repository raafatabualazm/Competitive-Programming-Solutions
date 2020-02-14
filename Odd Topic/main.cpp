#include <bits/stdc++.h>

using namespace std;

bitset<4001> a[100001];
bitset<4001> b[100001];
bitset<4001> c;
bitset<4001> x;
bitset<4001> y;
int main() {
    ios_base::sync_with_stdio(false);
    int n, m, q, l1, r1, l2, r2, temp;
    cin >> n >> m >> q;
    a[0].reset();
    b[0].reset();
    for (int i =1; i <= n; i++)
    {
        cin >> temp;
        a[i] = a[i - 1];
        a[i][temp] = a[i][temp] ^ 1;
    }
    for (int i =1; i <= m; i++)
    {
        cin >> temp;
        b[i] = b[i - 1];
        b[i][temp] = b[i][temp] ^ 1;
    }

    while (q--)
    {
        cin >> l1 >> r1 >> l2 >> r2;
        c.reset();
        x = a[r1] ^ a[l1 - 1];
        y = b[r2] ^ b[l2 - 1];
        c = x ^ y;
        cout << c.count() << "\n";
    }

    return 0;
}
