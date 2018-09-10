#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> names = {"Sheldon","Leonard","Penny", "Rajesh", "Howard"};
    int can;
    cin >> can;
    int place = can;
   int  h = 1;
    while (h*5 < place ) {
       // cout << h << endl;
        place -= h*5;
       // cout << place << endl;
        h*=2;
    }
    cout << names[(place -1)/h];
    return 0;
}
