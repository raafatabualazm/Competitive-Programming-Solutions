#include <bits/stdc++.h>

using namespace std;

int main()
{
    char ch;
    string s1, s2, s3;
    cin >> s1 >> s2;
    if (s1 < s2)
    {
        s3 = s1;
        ch = s1[s1.length() - 1] + 1;
        s3.pop_back();
                if (ch > 122)
                {
                    do {
                    ch = s3[s3.length() - 1];
                    s3.pop_back();
                    ch +=1;
                    }while (ch > 122);
                    s3.push_back(ch);
                    for (int j = s3.length(); j < s1.length(); j++)
                        s3.push_back('a');
                }
                 else s3.push_back(ch);
        if (s3 < s2)
            cout << s3;
        else
            cout << "No such string";
    }
    else
    {
        cout << "No such string";
    }
    return 0;
}
