#include <bits/stdc++.h>

using namespace std;

int main() {
    int64_t Q, S1, A, B, sum = 0;
    cin >> Q >> S1 >> A >> B;
    //bitset<4294967296> nums;
    vector<bool> nums(4294967296, 0);
    for (int64_t i = 0; i < Q; i++)
    {

        if (S1&1)
        {   if (!nums[(S1 / 2)])
            {
                nums[(S1 / 2)] = true;
                sum += (S1 / 2);
            }

        } else
        {
            if (nums[(S1 / 2)])
            {
                nums[(S1 / 2)] = false;
                sum -= (S1 / 2);

            }
        }
        S1 = (A*S1 + B) % 4294967296;
    }
    cout << sum;
    return 0;
}
