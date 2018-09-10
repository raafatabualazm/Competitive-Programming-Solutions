#include <bits/stdc++.h>
using namespace std;

int main()
{
    string mantra;
    string input;
    cin >> mantra;
    cin >> input;
    bool no_pair = false;
    vector< pair<char, char> > disarray;
    vector < pair<char, char> > matcharray;

    for (int i = 0; i < mantra.size(); i++) {
        if (mantra[i] != input[i]) {

            disarray.push_back(make_pair(max(mantra[i], input[i]),min(mantra[i], input[i])));
        }
        if (mantra[i] == input[i]) {

            matcharray.push_back(make_pair(max(mantra[i], input[i]),min(mantra[i], input[i])));
        }
    }
    sort(disarray.begin(), disarray.end());
    disarray.erase(unique(disarray.begin(),disarray.end()), disarray.end());
    for ( int i =0; i < disarray.size(); i++) {
        for (int j =i+1; j <disarray.size(); j++ ) {
            if (disarray[i].first == disarray[j].first && disarray[i].second != disarray[j].second) {
                no_pair = true;
                break;
            } else if (disarray[i].first != disarray[j].first && disarray[i].second == disarray[j].second) {
                no_pair = true;
                break;
            } else if (disarray[i].first == disarray[j].second && disarray[i].second != disarray[j].first) {
                no_pair = true;
                break;
            }

        }
    }
    for ( int i =0; i <disarray.size(); i++) {
        for (int j =0; j < matcharray.size(); j++ ) {
            if (disarray[i].first == matcharray[j].first) {
                no_pair = true;
                break;
            } else if (disarray[i].second == matcharray[j].second) {
                no_pair = true;
                break;
            }
        }
    }

    sort(disarray.begin(), disarray.end());
    disarray.erase(unique(disarray.begin(),disarray.end()), disarray.end());
    if (no_pair) {
        cout << -1;
    } else {
        cout << disarray.size() << endl;
        for (int i =0; i < disarray.size(); i++) {
            cout << disarray[i].first << " " << disarray[i].second << endl;
        }
    }


    return 0;
}
