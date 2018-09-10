#include <iostream>

using namespace std;

int main() {
    int h,m,h1=-1,m1=-1, cash = 1;
    int n,x=1;
    cin>> n;
    for (int i=0; i < n; i++) {
        cin>> h >> m;
        if (h==h1 && m==m1) {
            x++;
            if (x > cash) cash = x;
        }
        else {
            x = 1;
        }
        h1=h;
        m1=m;
    }
    cout<< cash;

return 0;
}
