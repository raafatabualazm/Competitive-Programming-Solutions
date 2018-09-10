#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string code;

    int index =0;
    cin >> n;
    cin >> code;
    char decode[n];
    //bool before = true;
    if (n % 2 != 0) {
        index = n/2;
        for (int i =0; i<n; i++) {
        decode[index] = code[i];
       index+=(i+1)*pow(-1,i+1);

        }
    }
    if (n % 2 == 0) {
        index = n/2 -1;
        for ( int i =0; i < n-1; i++) {
            decode[index] = code[i];
            index+=(i+1)*pow(-1,i);
        }
        decode[n-1] = code[n-1];
    }
    for (int i =0; i <n; i++) {
        cout << decode[i];

    }

    return 0;
}
