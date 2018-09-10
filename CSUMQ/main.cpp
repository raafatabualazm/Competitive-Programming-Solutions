#include <iostream>

using namespace std;

int main()
{
    int n, q, a ,b;
    cin >> n;
    int arr[n+5];
    arr[0] =0;
    for (int i =0; i < n; i++) {
        cin >> arr[i+1];
    }
    for (int i =1; i <= n; i++){
        arr[i] += arr[i-1];
    }
    cin >> q;
    for (int i =0; i < q; i++) {
        cin >> a >>  b;
        cout << arr[b+1] - arr[a] << endl;
    }
    return 0;
}
