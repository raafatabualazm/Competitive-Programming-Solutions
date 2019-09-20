#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2, s3, s4, s_out;
    char ch;
    bool flag = false;
    bool last_was_smaller = false;
    cin >> s1 >> s2;
    for (int i =0; i < s1.length(); i++)
    {
        if (s1[i] > s2[i])
        {
            if (last_was_smaller == false)
            {
                flag = true;
                break;
            }
            else
            {
                // last_was_smaller = false;
                ch = s1[i] + 1;
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
                    break;
                }
                 else s3.push_back(ch);
            }
        }
        else
        {
            if (s1[i] < s2[i]) last_was_smaller = true;
            ch = (s1[i] + s2[i]) / 2;
            s3.push_back(ch);

        }

    }
    for (int k =0; k < s1.length(); k++)
    {
        s4 = s1;
        ch = s1[s1.length() - 1] + 1;
        s4.pop_back();
                if (ch > 122)
                {
                    do {
                    ch = s4[s4.length() - 1];
                    s4.pop_back();
                    ch +=1;
                    }while (ch > 122);
                    s4.push_back(ch);
                    for (int j = s4.length(); j < s1.length(); j++)
                        s4.push_back('a');
                    break;
                }
                 else s4.push_back(ch);
    }
    s_out = s3;
    if (s3 == s1 || s3 == s2) flag = true;
    if (s4 < s2 && s4 > s1)
    {
        s_out = s4;
        flag = false;
    }

    if (flag)
    {
        cout << "No such string";
    }
    else
    {
        cout << s_out;
    }

    return 0;
}
