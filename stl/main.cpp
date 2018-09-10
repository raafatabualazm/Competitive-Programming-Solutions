#include<bits/stdc++.h>
using namespace std;

vector<string> output;
queue<string> input;
int n;
int int_count =0;
int int_pos = 0;
int next_pair_pos = 0;
int pair_pos =0;
int pair_count = 0;
string type;

void punctuate(queue<string> &in) {
        string curr;
        if (in.empty()) return;
        else {

            curr = in.front();
            in.pop();
            if (curr == "pair") {
                output.push_back(curr);
                output.push_back("<");
                pair_pos = next_pair_pos;
                int_pos = 0;
                next_pair_pos = 0;
                pair_count++;
                return punctuate(in);
            } else {
                if (int_pos == 0) {
                    output.push_back("int,");
                    int_pos = 1;
                    next_pair_pos = 1;

                } else {
                    output.push_back("int>");
                    pair_count--;
                    if(pair_count != 0) {
                    if (pair_pos == 1) { output.push_back(">"); pair_count--;}
                    else output.push_back(",");
                    }
                }
                return punctuate(in);
            }
        }
}

int main()
{

    cin >> n;
    while (int_count < n) {
        cin >> type;
        input.push(type);
        if (type == "int")int_count++;
    }
    punctuate(input);
    if (pair_count != 0) cout << "Error occurred";
    else {
     for(auto it: output) {
        cout << it;
     }

    }
    return 0;
}
