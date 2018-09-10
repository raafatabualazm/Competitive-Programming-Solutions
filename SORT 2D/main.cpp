#include <bits/stdc++.h>

using namespace std;
bool myfunc(pair<int,int> &a, pair<int,int> &b){
    return !((a.first > b.first) || ((a.first == b.first) &&(a.second < b.second)) );
}
int main() {
    int t, n, x ,y;

    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        pair<int, int> *arr = new pair<int, int>[n];
        for (int i =0; i < n; i++) {
            scanf("%d%d", &x, &y);
            arr[i] = (make_pair(x,y));
        }

    sort(arr, arr+n, myfunc);
    for(int i =0; i < n; i++ ) {
        printf("%d %d\n", arr[i].first, arr[i].second);
    }
        delete[] arr;
    }
    return 0;
}
