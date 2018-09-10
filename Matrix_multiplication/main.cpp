#include <iostream>
#include<iomanip>

using namespace std;



int main()
{
    int matA[2][3] = {{8, 9, 10}, {5,3,90}};
    int matB[3][3] = {{7, 15, 6}, {9,43,1}, {67, 11, 2}};

    int matC[2][3];
    int sum =0;

    for (int i =0; i < 2; i++) {

        for (int j =0; j < 3; j++) {
            for (int k =0; k < 3; k++) {
               sum += matA[i][k]*matB[k][j];
            }
            matC[i][j] = sum;
            sum =0;
        }
    }
    for (int m =0; m < 2; m++) {
        for (int n =0; n < 3; n++ ) {
            cout << setw(5) << left << matA[m][n];
        }
        cout << endl;
    }
    cout <<"\n\n\n";
    for (int m =0; m < 3; m++) {
        for (int n =0; n < 3; n++ ) {
            cout << setw(5) << left << matB[m][n];
        }
        cout << endl;
    }
    cout <<"\n\n\n";
    for (int m =0; m < 2; m++) {
        for (int n =0; n < 3; n++ ) {
            cout << setw(5) << left << matC[m][n];
        }
        cout << endl;
    }

    return 0;
}
