#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int counter =0;
    int num_q =0;
    string str;
    int x, y;
    cin >> str >> num_q;
    int ans[num_q];
    int occ[str.length()];
    occ[0] = 0;
    for (int i =1; i < str.length(); i++) {
        if (str[i] == str[i-1]) {
            ++counter;
            occ[i] = counter;
        } else {
            occ[i] = counter;
        }
    }


for (int j =0; j < num_q; j++) {
    cin >> x >> y;
    ans[j] = occ[y-1] - occ[x-1];
}
for (int j =0; j < num_q; j++) {
    cout << ans[j] << endl;
}




    return 0;
}
