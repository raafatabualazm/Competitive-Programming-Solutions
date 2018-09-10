#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    int counter =0;
    int oddCount =0;
    int evenCount =0;
    cin >> n >> m;
    int cards[n];
    int exchange_cards[n];
    vector<int> cards2;
    for (int i =0; i <n; i++) {
        cin >> cards[i];
        exchange_cards[i] = cards[i];
    }
    for (int i =0; i <n; i++) {
        cards2.push_back(i+1);
    }
    for (int i =0; i <n; i++) {
        if (cards[i] % 2 = 0) {
            evenCount++;
        } else if (cards[i] % 2 != 0) {
            oddCount++;
        }
    }
    if (evenCount > oddCount) {
    for (int i =0; i <n i++) {
        for (int j =i+1; j < n; j++) {
            if (exchange_cards[i] == exchange_cards[j]) {
                for (int k = 0; k < m; k++) {
                    if (cards2[k] != cards[i] && cards2[k] % 2 != 0);
                    exchange_cards[j] = cards2[k];
                    counter++;
                    cards2.erase(cards2.begin()+k);
                }
            }
        }
    }
    }
    return 0;
}
