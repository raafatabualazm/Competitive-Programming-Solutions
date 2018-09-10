#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num_commands;
    cin >> num_commands;
    string input;
    vector<string> path;
    string command;
    string file_dir = "";
    char c;
    vector<string> output;
    string path_out = "";
    int index =0;
    bool in_loop;
    for (int i =0; i <num_commands; i++)
    {
        cin >> command;
        if (command == "pwd")
        {
            cout << "/";
            for (int j =0; j < path.size(); j++) {
                cout << path[j] << "/";
            }
            cout << endl;
        }
        else if (command == "cd")
        {
            index =0;
            cin >> input;
            if (input[0] == '/') {
                index =1;
                path.clear();
            }
            while (in_loop) {
                int next_index = input.find('/', index);
                if (next_index != string::npos) {

                file_dir = input.substr(index, next_index - index);
                if (file_dir.compare("..") != 0) {
                    path.push_back(file_dir);
                } else {
                    path.pop_back();
                }
                index = next_index +1;
                } else {
                    file_dir = input.substr(index, next_index - index);
                if (file_dir.compare("..") != 0) {
                   path.push_back(file_dir);
                } else {
                    path.pop_back();
                }
                in_loop = false;
                }


            }
        }
    }


    return 0;

}
