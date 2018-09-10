#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, string> mp;
    string en_word;
    string for_word;
    string line;
    while(getline(cin, line) && !line.empty()) {
        int space_pos = line.find(" ");
        en_word = line.substr(0, space_pos);
        for_word = line.substr(space_pos + 1);
        mp.insert(make_pair(for_word,en_word));

    }
    while (getline(cin, line) && !line.empty()) {
        if(mp.find(line) != mp.end()) cout << mp[line];
        else cout << "eh";
        cout << endl;
    }
    return 0;
}
