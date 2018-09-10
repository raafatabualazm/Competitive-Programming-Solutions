#include <bits/stdc++.h>

using namespace std;

void addNameandNumber(fstream& file_out) {
    string in;
    cout << "Enter a name & a number: ";
        getline(cin, in);
        file_out << in << endl;
        cout << endl;
}

void show(fstream& file_in) {

    string str1;
    while (getline(file_in, str1)) {
        cout << str1 << endl;
    }
}

void search_in_file(fstream& file_in) {
    string name;
    cout << "Enter name: ";
    cin >> name;
    string search_criteria;
    while (!file_in.eof()) {
        getline(file_in, search_criteria);
        if(search_criteria.find(name)) {
            cout<<"asdasd";
            cout << search_criteria << endl;
        } else {
            cout << "Not found";
        }
    }

}

int main()
{
    int choice;
    fstream file_in("myfile.txt", ios::in);
    fstream file_out("myfile.txt", ios::out|ios::app);
    bool choice_to_cont = true;
    do {
        cout << "1. Add" << endl << "2. Show" << endl << "3. Search" << endl <<"4. Exit" << endl << "Your choice: ";
        cin >> choice;
        cin.ignore();
        switch(choice) {
    case 1:
        addNameandNumber(file_out);
        break;
    case 2:
        show(file_in);
        break;

    case 3:
        search_in_file(file_out);
        break;
    case 4:
        choice_to_cont = false;
        }
    } while (choice_to_cont);
    file_in.close();
    file_out.close();
    return 0;
}
