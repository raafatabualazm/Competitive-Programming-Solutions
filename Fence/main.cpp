#include <iostream>

using namespace std;

int main()
{
    int n,h;
    cin >> n >> h;
    int friends[n];
    int width =0;
    for (int i =0; i <n; i++) cin >> friends[i];
    for (int j =0; j <n; j++) {
        if (friends[j] > h) {
            width++;
        }
    }
    cout << n + width;
    return 0;
}
