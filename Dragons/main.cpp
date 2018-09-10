#include <bits/stdc++.h>

using namespace std;

int main()
{
   int s;
   int n;
   int x;
   int y;
   bool win = true;
   cin >> s >> n;
    //vector< pair<int, int> > duels;
    pair<int, int> duels[n];
    for (int i =0; i <n; i++) {
        cin >> duels[i].first >> duels[i].second;
    }
    sort(duels, duels+n);
    for (int i =0; i < n; i++) {
        if (s > duels[i].first) {
            s+=duels[i].second;
        } else {
            win = false;
        }
    }
   if (win) cout << "YES";
   else cout << "NO";

    return 0;
}
