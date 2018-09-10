#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num_lines =0;
    int num = 0;
    int sum = 0;
    int n;
    int max_number = -1;
    vector<int> streaks;
    cin >> num;
    while (num != 0) {
            sum = 0;
       for (int i =0; i < num; i++) {
            cin >> n;
            sum += n;
            if (sum < 0) sum = 0;
            if (sum > max_number) max_number = sum;
       }
       streaks.push_back(max_number);
       cin >> num;
    }

        if (max_number > 0) {
            cout << "The maximum winning streak is " << max_number << "." <<endl;
        } else {
            cout << "Losing streak." << endl;
        }

    return 0;
}
