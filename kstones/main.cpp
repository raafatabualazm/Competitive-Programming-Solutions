#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long num;
    long long x, y ,z;
    long long sum =0;
    cin >> num;
     long long arr[num+1];
     long long arr2[num+1];
     arr[0] =0;
     arr2[0] =0;
    for (long long i = 1; i < num+1; i++) {
        cin >> arr[i];
        arr2[i] = arr[i];
    }
    sort(arr2, arr2+num+1);
    for (long long j = 1; j < num+2; j++) {
        arr[j] += arr[j-1];
        arr2[j] += arr2[j-1];

    }

    long long num_q;
    cin >> num_q;
    long long ans[num_q];
    for (long long j = 0; j < num_q; j++) {
        cin >> x >> y >> z;
        if (x == 1) {
            ans[j] = arr[z] - arr[y-1];
        } else {
            ans[j] = arr2[z] - arr2[y-1];
        }
    }
    for (int k = 0; k < num_q; k++) {
        cout << ans[k] << endl;
    }
    return 0;
}
