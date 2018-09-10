#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int problems[n][3];
    int num =0;
    for (int i =0; i <n; i++) {
        for (int j =0; j < 3; j++) {
            cin >> problems[i][j];
        }
    }

    for (int i =0; i <n; i++) {
            int sum =0;
        for (int j =0; j < 3; j++) {
            sum += problems[i][j];
        }
        if (sum > 1) num++;
    }
    cout << num;
    return 0;
}
