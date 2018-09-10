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
        cout << "Name: " << name << " ID: " << id << " Phone: " << phone << endl;
        return "";
    }
    void set_name(string new_name) {
        name = new_name;
    }
    void set_ID(int id2) {
        if (id2 <= 0) {
            cout << "Error invalid ID" << endl;
            id = NULL;
        } else {
            id = id2;
        }
    }
};
int main()
{
    students student1;
    student1.name = "Ahmed";
    student1.set_ID(1321431);
    student1.phone = 4545464;

    students student2;
    student2.name = "Mike";
    student2.set_ID(156465);
    student2.phone = 524323;

    student1.get_info();
    student2.get_info();
    student1.set_name("Mohamed");
    student2.set_name("Steve");
    student1.get_info();
    student2.get_info();

    students student3;
    student3.set_ID(-1);
    student3.name = "Raafat";
    student3.phone = 45343241;
    student3.get_info();
    return 0;
}
