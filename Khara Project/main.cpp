#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct node {
    string name;
    string phone;
    node *next;
    node *prev;

};



node *head = NULL;

void add(string n, string p) {
    if (head == NULL) {
        head = new node();
        head->name = n;
        head->phone = p;
        head->next = NULL;
        head->prev = NULL;
    }
    else {
        node *contact = new node();
        contact->name = n;
        contact->phone = p;
        node *curr = head;
        while (curr->next != NULL) {
            curr = curr->next;
        }
        contact->prev = curr;
        curr->next = contact;
        contact->next = NULL;
    }
}

void display() {
    node *curr = head;
    while(curr != NULL) {
        cout << curr->name << " " << curr->phone << endl;
        curr = curr->next;
    }
}

void readFile() {
    string n,p;
    ifstream infile;
    infile.open("contacts.txt");
    while (infile >> n >> p) {
        add(n,p);
    }
    infile.close();

}

void writeFile() {
    ofstream outfile;
    outfile.open("contacts.txt");
    node* curr = head;
    while(curr != NULL) {
        outfile << curr->name << " " << curr->phone;
         if (curr->next != NULL) {
            outfile << endl;
        }

        curr = curr->next;
    }

  outfile.close();
}

void deletecontact(string n) {
    node *node_delete = NULL;
    node* curr = head;
    vector<node*> v;
    while (curr != NULL) {
        if(curr->name == n) {
            v.push_back(curr);
        }
        curr = curr->next;
    }
    node *last_element = v.at(v.size()-1);
    if(v.size() > 1) {
        for (unsigned int i =0; i < v.size(); i++) {
            cout << i+1 << ". "<< v[i]->name << " " << v[i]->phone << endl;
        }
    int choice;
    cout << "Your choice: ";
    cin >> choice;
    int delete_index = choice-1;
    if (choice == v.size()) {
        node_delete = last_element;
    } else {
    node_delete = v.at(delete_index);
    }
    } else {
    node_delete = v.at(0);
    }
    if (node_delete != head) {
    if (node_delete->prev != NULL) {
    node_delete->prev->next = node_delete->next;
    }
    if(node_delete->next != NULL) {
    node_delete->next->prev = node_delete->prev;
    }
    delete node_delete;
    }
     if (node_delete == head) {
         node *head_new = head->next;
         delete head;
         head = head_new;
     }


}

void edit(string n) {
node *node_edit = NULL;
    node* curr = head;
    vector<node*> v;
    while (curr != NULL) {
        if(curr->name == n) {
            v.push_back(curr);
        }
        curr = curr->next;
    }
    node *last_element = v.at(v.size()-1);
    if(v.size() > 1) {
        for (unsigned int i =0; i < v.size(); i++) {
            cout << i+1 << ". "<< v[i]->name << " " << v[i]->phone << endl;
        }
    int choice;
    cout << "Your choice: ";
    cin >> choice;
    int edit_index = choice-1;
    if (choice == v.size()) {
        node_edit = last_element;
    } else {
    node_edit = v.at(edit_index);
    }
    } else {
    node_edit = v.at(0);
    }
    cout << "Enter new phone number: ";
    string np;
    cin >> np;
    node_edit->phone = np;
}
void searchacontact(string np) {
    node *curr = head;
    int n =0;
    bool anyfound = false;
    while(curr != NULL) {
        if(curr->name == np || curr->phone == np) {
            cout << ++n << ". " << curr->name << " " << curr->phone << endl;
            anyfound = true;
        }
        curr = curr->next;
    }
    if(!anyfound) cout << "Nothing found!" << endl;

}

int main()
{
    string n,p,np;
    int choice;
    readFile();
    do {
    cout << "1. Add a contact" << endl
         << "2. Edit a contact" << endl
         << "3. Delete a contact" <<endl
         << "4. Show All" << endl
         << "5. Search a contact" << endl
         << "6. Exit" << endl;

    cout << "Your choice: ";
    cin >> choice;
    if (choice == 1) {
        cout << "Enter name: ";
        cin >>n;
        cout << "Enter number: ";
        cin >>p;
        add(n,p);
        system("cls");
    } else if (choice == 2) {
        cout << "Enter contact name: ";
        cin >> n;
        edit(n);
        system("cls");
    } else if (choice == 3) {
        cout << "Enter contact name: ";
        cin >> n;
        deletecontact(n);
        system("cls");
    } else if (choice == 4) {
        system("cls");
        cout << "-----------------------------------------------------------------" << endl;
        display();
        cout << "-----------------------------------------------------------------" << endl;
    } else if (choice == 5) {
        cout << "Enter name or a number: ";
        cin >> np;
        system("cls");
        cout << "-----------------------------------------------------------------" << endl;
        searchacontact(np);
        cout << "-----------------------------------------------------------------" << endl;
    }
    } while (choice !=6);
    writeFile();


    return 0;
}
