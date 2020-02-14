#include <bits/stdc++.h>

using namespace std;

template<size_t sz> struct bitset_comparer {
    bool operator() (const bitset<sz> &b1, const bitset<sz> &b2) const {
        return b1.to_ulong() < b2.to_ulong();
    }
};
int main() {
    uint64_t n, ans = 0;
    cin >> n;
    string strs[n];
    bitset<26> freq[n];
    bitset<26> one = 0b00000000000000000000000001;
    map<bitset<26>, uint64_t, bitset_comparer<26>> mp;
    for (uint64_t i = 0; i < n; i++)
    {
        cin >> strs[i];
    }
    for (uint64_t i = 0; i < n; i++)
    {
        freq[i].reset();
        for (uint64_t j = 0; j < strs[i].length(); j++)
        {
            freq[i][strs[i][j] - 'a'] = freq[i][strs[i][j] - 'a'] ^ 1;

        }
        mp[freq[i]]++;
    }
   for (uint64_t i = 0; i < n; i++)
    {
       ans += (mp[freq[i]] - 1);
        for (uint64_t j = 0; j < 26; j++)
        {
            ans += mp[freq[i] ^ (one << j)];
        }
    }
   cout << ans / 2;
    return 0;
}
