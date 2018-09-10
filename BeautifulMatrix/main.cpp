#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int row, col;
    int khara_matrix[5][5];
    for (int i =0; i < 5; i++) {
        for (int j =0; j <5; j++) {
            cin >> khara_matrix[i][j];
        }
    }

    for (int i =0; i < 5; i++) {
        for (int j =0; j <5; j++) {
            if ( khara_matrix[i][j] == 1) {
                row =i;
                col =j;
            }
        }
    }
    cout << abs(2-row) + abs(2-col);
    return 0;
}
