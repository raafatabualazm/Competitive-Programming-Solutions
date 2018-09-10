#include <iostream>
#include <string>
using namespace std;

class students
{
public:
    string name;
    int id;
    int phone;
    //string info;
    string get_info() {
        cout << "Name: " << name << " ID: " << id << " Phone: " << phone;
    }
};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
