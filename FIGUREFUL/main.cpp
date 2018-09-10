#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<pair<int, int>, string> code;
    string name;
    int m,n,k1,k2;
    scanf("%d", &m);
    while (m--) {
        cin >> k1 >> k2 >> name;
        code[make_pair(k1, k2)] = name;
    }
    scanf("%d", &n);
    while(n--) {
        scanf("%d%d", &k1, &k2);
        cout << code[make_pair(k1,k2)] << endl;
    }

    return 0;
}
