#include <iostream>
#include <fstream>
using namespace std;
struct contact
{
    string name;
    string phone;
    contact *next;
};
contact *head = NULL;

void addContact(string name, string phone)
{
    contact *curr = head;
    if(head == NULL) {
        head = new contact();
        head->name = name;
        head->phone = phone;
        head->next = NULL;
    } else {
        contact *temp = new contact();
        temp->name = name;
        temp->phone = phone;
        temp->next = NULL;
        while(curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = temp;
    }
}

void readFile(fstream &infile)
{
    string n,p;
    while(infile >> n >> p) {
        addContact(n,p);
    }
}
void display()
{
    contact *curr = head;addContact("Ali", "01564647587");
    while(curr != NULL) {
        cout << curr->name << " " << curr->phone << endl;
        curr = curr->next;
    }
}

void writeContacts(fstream &outfile) {
    contact* curr = head;
    while (curr != NULL) {
        outfile << curr->name << " " << curr->phone;
        if (curr->next != NULL) outfile << endl;
        curr = curr->next;
    }

}
int main()
{
    fstream infile;
    infile.open("contactsfile.txt", ios::in);
    readFile(infile);
    infile.close();
    fstream outfile;
    outfile.open("contactsfile.txt", ios::out);
    //addContact("Ali", "01564647587");
    writeContacts(outfile);

    outfile.close();
    display();

    return 0;
}
