#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n , m, k;
    cin >> n >> m >>k;
    char side;
    int lane, desk;
    int row =0;
    if (k % 2 == 0) side = 'R';
    else side = 'L';
    for (int i =1; i <=n; i++) {
        if (k <= 2*m*i ) {
            lane = i;
            break;
        }
    }
    row = ((lane-1) * m * 2 ) +1;
    for (int j =1; j <= m; j++ ) {
        if ( k == row || k == (row+1)) {
            desk =j;
            break;
            } else {
                row+=2;
            }
    }
    cout << lane << " " << desk << " " << side;
    return 0;
}
