#include <bits/stdc++.h>

using namespace std;

int main()
{
    multimap<int, int> dates;
    int n, a ,b, counter =0;
    cin >> n;
    for (int i =0; i <n; i++) {
        cin >> a >> b;
        dates.insert({b, a});
    }
    int currE = (*dates.rbegin()).first;
    int currS = (*dates.rbegin()).second;
    for (auto j = dates.rbegin(); j != dates.rend(); ++j) {
        if ((*j).first < currE && (*j).second > currS) counter++;
        else {
            currE = (*j).first;
            currS = (*j).second;
        }
    }
    cout << counter << endl;
    return 0;
}
