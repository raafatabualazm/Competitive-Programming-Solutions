#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int least = 10000000, greatest = -100;
    int num,start,finish, f[370], m[370];
    char gender;
    fill(f,f+370,0);
    fill(m,m+370,0);
    cin >> num;
    for(int i =0; i <num; i++) {
        cin >> gender >> start >> finish;
        if(gender == 'M') {
            m[start]++;
            m[finish+1]--;
        } else if (gender == 'F') {
            f[start]++;
            f[finish+1]--;
        }
    }
    for (int i =1; i < 367; i++) {
        m[i]+=m[i-1];
        f[i]+=f[i-1];

    }
    for (int i =0; i < 367; i++) {
        least = min(m[i],f[i]);
        greatest = max(greatest, least);
    }

    cout << greatest * 2 << endl;

    return 0;
}
