#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> s;
    int counter =0;
    for (int i =0; i <4; i++) {
        cin >> counter;
        s.push_back(counter);
    }
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    cout << 4 - s.size();
    return 0;
}
