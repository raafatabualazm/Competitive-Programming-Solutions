#include <iostream>
#include <string>
using namespace std;

int main() {
long long A, B, X, Y, Z, bn, yn;
cin>>A>>B;  // a=12 b=12
cin>>X>>Y>>Z;  // y=3 g=5 b=2
yn = 2*X + Y;    // yn = 6 + 5
bn = 3*Z + Y;   // bn = 6 + 5
if (A > yn) yn = 0;
else yn-=A;
if (B > bn) bn = 0;
else bn-=B;
cout<<abs(yn+bn);
return 0;
}
