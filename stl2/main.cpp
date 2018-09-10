#include <bits/stdc++.h>

using namespace std;
vector<string> out;
queue <string> in;
int n;
int int_counter = 0;
int pair_counter = 0;
int counter = 0;
int pos = 0;
void punctuate() {
    if (!in.empty()) {
    pos++;
    string type = in.front();
    in.pop();
    out.push_back(type);
    if (type == "int" && (int_counter > 1 || pair_counter > 0) && pos == 1) {
        counter = -1;
        return;
    }



    if (type == "pair") {
        counter+=1;
        out.push_back("<");
        punctuate();
        out.push_back(",");
        punctuate();
        out.push_back(">");
        counter-=1;

    }

    } else {
        counter = 0;

    }

}
int main()
{
    string type;
    cin >> n;
    while (cin >> type) {

        in.push(type);
        if (type == "int") int_counter++;
        else if (type == "pair") pair_counter++;
    }
    punctuate();


    if (counter != 0) cout << "Error occurred";
    else if (!in.empty()) cout << "Error occurred";
    else {
        for(auto it: out) {
            cout << it;
        }
    }

    return 0;
}
