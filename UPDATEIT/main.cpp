#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t , n ,u, l , r , val, q, index, counter =0;
    cin >> t;
    int ans[t];
    int arr[10008];
    for(int i =0; i < t; i++) {
    fill(arr, arr+10008, 0);
        cin >> n >> u;
//        for (int j =0; j < n; j++) {
//            cin >> arr[j];
//        }
        for (int j =0; j < u; j++) {
            cin >> l >> r >> val;
            arr[l]+=val;
            arr[r+1]-=val;
        }
        for (int j =1; j < n; j++) {
            arr[j] += arr[j-1];
        }
        cin >> q;
        for (int j = 0; j < q; j++) {
            cin >> index;
            cout << arr[index] << endl;
        }

    }

    return 0;
}
