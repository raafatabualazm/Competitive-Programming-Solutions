#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string original;
    string or_last;
    string or_beforelast;
    cin >> original;
    or_last = original;
    or_beforelast = original;
    or_last.pop_back();
    or_beforelast.erase(or_beforelast.end() - 2);
    cout << max(max(stoi(original),stoi(or_last)), stoi(or_beforelast));
    return 0;
}
