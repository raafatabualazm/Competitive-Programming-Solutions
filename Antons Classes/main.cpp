#include <iostream>

using namespace std;

int main()
{
    int mxf = INT_MIN, mxf2 = INT_MIN, mnf = INT_MAX, mnf2 = INT_MAX;
    int n, m;
    cin >> n;
    int a, b;
    for (int i =0; i < n; i++) {
        cin >> a >> b;
        mnf = min(mnf, b);
        mxf = max(mxf, a);
    }
    cin >> m;
    for (int i =0; i < m; i++) {
        cin >> a >> b;
        mnf2 = min(mnf2, b);
        mxf2 = max(mxf2, a);
    }
    int ans = max((mxf2-mnf), (mxf - mnf2));
    if (ans < 0) cout << 0 << endl;
    else cout << ans << endl;
    return 0;
}
