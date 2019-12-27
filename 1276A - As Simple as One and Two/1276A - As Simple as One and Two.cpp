// 1276A - As Simple as One and Two.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    string subs;
    vector<uint64_t> ans;
    while (t--)
    {
        ans.clear();
        cin >> s;
        for (uint64_t i = 0; i < s.length(); i++)
        {
            subs = s.substr(i, 5);
            if (subs == "twone")
            {   
                s[i + 2] = 'h';
                ans.push_back(i+2);
            }
            subs = s.substr(i, 3);
            if (subs == "two" || subs == "one")
            {
                s[i + 1] = 'h';
                ans.push_back(i+1);
            }
        }
        //sort(ans.begin(), ans.end());
        //unique(ans.begin(), ans.end());
        cout << ans.size() << endl;
        for (uint64_t var : ans)
        {
            cout << var + 1 << " ";
        }
        cout << endl;
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
