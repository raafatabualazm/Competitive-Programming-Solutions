#include <bits/stdc++.h>

using namespace std;
int a[200005];
int main() {
    int t, n, temp, l, r, diff, diff_r, diff_l, ans;
    cin >> t;
    map<int , int> diffs;
    while (t--)
    {
        diffs.clear();
        diff_l = 0;
        diff_r = 0;
        diff = 0;
        temp = 0;
        cin >> n;
        ans = n*2;
        l = n - 1;
        r = n;
        n *= 2;
        for (int i = 0; i <n; i++)
        {
            cin >> temp;
            a[i] = temp;
            if (a[i] == 1) diff++;
            else diff--;
        }
        diffs[0] = 0;
        for (int i = r; i <n; i++)
        {

            if (a[i] == 1) diff_r++;
            else diff_r--;
            if (diffs.find(diff_r) == diffs.end())
            {

                diffs[diff_r] = i - (n/2 - 1);
            }
        }

        for (int i = l; i >= 0; i--)
        {
            if (a[i] == 1) diff_l++;
            else diff_l--;
            if (diffs.find(diff - diff_l) != diffs.end())
            {

                ans = min(ans, diffs[diff - diff_l] + n/2 - i);
            }
        }

        if (diffs.find(diff) != diffs.end())
        {
            ans = min(ans, diffs[diff]);
        }
        cout << ans << endl;

    }
    return 0;
}
