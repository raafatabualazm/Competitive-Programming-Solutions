#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    char ans;
    fstream file_out("myfile.txt", ios::app);
    string in;
    do {
        cout << "Enter a name: ";
        getline(cin, in);
        file_out << in << endl;
        cout << "One more? (y/n) ";
        cin >> ans;
        cin.ignore();
        cout << endl;
    } while (ans == 'y');
    file_out.close();

    ifstream file_in("myfile.txt");
    string str1;
    while (getline(file_in, str1)) {
        cout << str1 << endl;
    }
    file_in.close();
    return 0;
}
