#include <bits/stdc++.h>
using namespace std;

int found_at2;
class contact {
private:
    vector< pair<string, int> > contact_info;
public:
    void add_contact(string contact_name, int contact_number) {
        contact_info.push_back(make_pair(contact_name, contact_number));
        sort(contact_info.begin(),contact_info.end());
    }
    void edit_contact(string contact_name) {
        int found_at;
        for (unsigned int i =0; i < contact_info.size(); i++) {
            if (contact_info[i].first == contact_name) {
                found_at = i;
                break;
            }
        }
        if (contact_info[found_at + 1].first == contact_name) {
            int choice;
            int counter = found_at;
            int index = 1;
            while (contact_info[counter].first == contact_name) {
                cout << index << ". " << contact_info[counter].first << " " << contact_info[counter].second << endl;
                counter++;
                index++;
            }
            cout << "Choose any please: ";
            cin >> choice;
            found_at = found_at + (choice - 1);
        }
        cout << "Enter the new number: ";
        cin >> contact_info[found_at].second;
    }
    void show_all() {
        for (unsigned int i =0; i < contact_info.size(); i++) {
            cout << contact_info[i].first << " " << contact_info[i].second << endl;
        }
    }
    void delete_contact(string contact_name) {
        int found_at;
        for (unsigned int i =0; i < contact_info.size(); i++) {
            if (contact_info[i].first == contact_name) {
                found_at = i;
                break;
            }
        }
        if (contact_info[found_at + 1].first == contact_name) {
            int choice;
            int counter = found_at;
            int index = 1;
            while (contact_info[counter].first == contact_name) {
                cout << index << ". " << contact_info[counter].first << " " << contact_info[counter].second << endl;
                counter++;
                index++;
            }
            cout << "Choose any please: ";
            cin >> choice;
            found_at = found_at + (choice - 1);
        }
        contact_info.erase(contact_info.begin()+found_at);
    }
    void writeFile(ofstream& contact_file) {
        for (unsigned int i =0; i < contact_info.size(); i++) {
            contact_file << contact_info[i].first << " " << contact_info[i].second << endl;
        }

    }
    void readFile(ifstream& contact_file) {
        string input;
        string name;
        int number;

        while (contact_file >> name >> number) {
        //contact_file >> input;
       // size_t pos = input.find(" ");
        //string name = input.substr(0,pos);
        //string number_str = input.substr(pos);
        //int number = stoi(number_str) ;
        contact_info.push_back(make_pair(name,number));
        }
    }

};

int main()
{
    int choice;
    ifstream contacts_file_read;
    contacts_file_read.open("contacts.txt");

    bool in_prog = true;
    contact contacts;
    string name;
    int number;
    contacts.readFile(contacts_file_read);
    while (in_prog) {
   cout << "1. Add contacts" << endl
        << "2. Edit contact" << endl
        << "3. Delete contact" << endl
        << "4. Show all" << endl
        << "5. exit" << endl;
    cout << "Your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter name & number separated by a space: ";
        cin >> name >> number;
        contacts.add_contact(name, number);
    } else if (choice == 2) {
        cout << "Enter name of contact to be edited: ";
        cin >> name;
        cout << found_at2;
        contacts.edit_contact(name);
    } else if (choice == 3) {
        cout << "Enter name of contact to be deleted: ";
        cin >> name;
        contacts.delete_contact(name);
    } else if (choice == 4) {
        contacts.show_all();
    } else if(choice == 5) {
        ofstream contacts_file_write;
    contacts_file_write.open("contacts.txt");
        contacts.writeFile(contacts_file_write);
        in_prog = false;
        contacts_file_read.close();
        contacts_file_write.close();
    } else {
        cout << "Wrong choice" << endl;
    }
    }



    return 0;
}
