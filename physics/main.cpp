#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int forces[n][3];
    int resultant[3];
    fill(resultant, resultant+3,0);
    for (int i =0; i <n; i++) {
        for (int j =0; j <3; j++) {
            cin >> forces[i][j];
        }
    }
    for (int i =0; i <3; i++) {
        for (int j =0; j <n; j++) {
           resultant[i] += forces[j][i];
        }
    }
    if (resultant[0] ==0 && resultant[1] ==0 && resultant[1] == 0) cout << "YES";
    else cout << "NO";
    //cout << resultant[0] << " " << resultant[1] << " " << resultant[2];
    return 0;
}
