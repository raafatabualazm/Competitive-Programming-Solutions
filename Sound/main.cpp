#include <iostream>
#include <iomanip>

using namespace std;

void printNum(float x) {
    cout << "Float: " << x << endl;;
}

void printNum(int x) {
    cout << "Integer: " << x << endl;;
}

int main()
{
   int a = 67;
   float b = 56.7;
   float c = 6;
   printNum(a);
   printNum(b);
   printNum(c);
    return 0;
}
