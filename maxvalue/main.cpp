#include <iostream>

using namespace std;

int main()
{
    int numbers[3];
    int result = 0;
    for (int i = 0; i < 3; i++) {
        cin >> numbers[i];
    }
    if (numbers[0] == 1) {
       result = (numbers[0] + numbers[1]) * numbers[2];
    } else if (numbers[1] == 1) {
        result = (min(numbers[0],numbers[2]) + numbers[1]) * max(numbers[0],numbers[2]);
    } else if (numbers[2] == 1) {
        result = numbers[0] * (numbers[1] + numbers[2]);
    } else if (numbers[0] == 0) {
        result = numbers[1] * numbers[2];
    } else if (numbers[1] == 0) {
        result = numbers[0] * numbers[2];
    } else if (numbers[2] == 0) {
        result = numbers[1] * numbers[0];
    } else {
        result = numbers[0]*numbers[1]*numbers[2];
    }
    cout << result;
    return 0;
}
