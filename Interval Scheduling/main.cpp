#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n;
    pair<int, int> first_dates1[n];
    pair<int, int> first_dates2[n];
    for (int i =0; i < n; i++) {
        cin >> first_dates1[i].first >> first_dates1[i].second;
        first_dates2[i].second = first_dates1[i].first;
        first_dates2[i].first = first_dates1[i].second;
    }
    sort(first_dates1, first_dates1+n);
    sort(first_dates2, first_dates2+n);

    cin >> m;
    pair<int, int> second_dates1[n];
    pair<int, int> second_dates2[n];
    for (int i =0; i < m; i++) {
        cin >> second_dates1[i].first >> second_dates1[i].second;
        second_dates2[i].second = second_dates1[i].first;
        second_dates2[i].first = second_dates1[i].second;
    }
    sort(second_dates1, second_dates1+m);
    sort(second_dates2, second_dates2+m);

  int k =  first_dates1[n-1].first - second_dates2[0].first;
  int j = second_dates1[n-1].first - first_dates2[0].first;

  cout << max(max(j,k), 0);


    return 0;
}
