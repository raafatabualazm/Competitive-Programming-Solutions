#include <iostream>

using namespace std;

int main()
{
    int n;
    string genome;
    cin >> n;
    cin >> genome;
    int c_count =0;
    int a_count =0;
    int g_count =0;
    int t_count =0;
    for (int i =0; i <n; i++) {
        if (genome[i] == 'A') a_count++;
        else if (genome[i] == 'C') c_count++;
        else if (genome[i] == 'G') g_count++;
        else if (genome[i] == 'T') t_count++;
    }
    if (n%4 == 0) {
        if (t_count > n/4 || a_count > n/4 || g_count > n/4 || c_count > n/4) {
            cout << "===";
        } else {
           for (int i =0; i<n; i++) {
            if (genome[i] == '?') {
                if (a_count < n/4) {
                    a_count++;
                    genome[i] = 'A';
                } else if (c_count < n/4) {
                    c_count++;
                    genome[i] = 'C';
                } else if (g_count < n/4) {
                    g_count++;
                    genome[i] = 'G';
                } else if (t_count < n/4) {
                    t_count++;
                    genome[i] = 'T';
                }
            }
           }
           cout << genome;
        }
    } else {
        cout << "===";
    }
    return 0;
}
