#include <iostream>

using namespace std;

void disp(int[], int);

int main()
{
    int arr[9] = {4, 5, 78, 0, 12,76, 66, 90, 1565};
    disp(arr, 9);
    return 0;
}

void disp(int x[], int sizeOfArray) {

    for (int i =0; i < sizeOfArray; i++) {
        cout << x[i] << " ";
    }

}
