#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
    int t, n, k, s, it =0;
    deque<int> dq;
    cin >> t;
    for (int i =0; i < t; i++) {
        cin >> n >> k;
        for (int j =0; j < n; j++) {
            cin >> s;
            dq.push_back(s);
        }
        while (dq.size() >= k) {
            cout << *max_element(dq.begin(), dq.begin()+k) << " ";
            dq.pop_front();

        }
        cout << endl;
        dq.clear();

    }
    return 0;
}
