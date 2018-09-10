#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {15, 4, 3, 8, 15, 22, 7, 9, 2, 3, 3, 12, 6};
    sort(arr,arr+13);
    for (int i =0; i < 13; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
