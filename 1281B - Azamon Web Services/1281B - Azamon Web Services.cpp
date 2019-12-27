// 1281B - Azamon Web Services.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{   
    int t;
    cin >> t;
    string s, c, b;
    char l;
    //char temp;
    while (t--)
    {
        cin >> s >> c;
        b = s;
        sort(b.begin(), b.end());
        if (s < c) cout << s << endl;
        else
        {
            for (int i = 0; i < s.length() && i < c.length(); i++)
            {
                if (s[i] != b[i])
                {
                   
                    for (int j = s.length() - 1; j >= 0; j--)
                    {
                        if (s[j] == b[i])
                        {
                            swap(s[i], s[j]);
                            j = -1;
                            i = s.length();
                        }
                    }
                    
                }
            }
            if (s < c) cout << s;
            else cout << "---";
            cout << endl;
        }
        
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
