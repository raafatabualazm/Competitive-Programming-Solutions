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
    infile.open("contact.txt");
    while (infile >> n >> p) {
        add(n,p);
    }
    infile.close();

}

void writeFile() {
    ofstream outfile;
    outfile.open("contact.txt");
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

 /*void deletecontact(string n) {
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
    node_delete->prev->next = node_delete->next;
    if(node_delete->next != NULL) {
    node_delete->next->prev = node_delete->prev;
    }
    delete node_delete;
} */
/* void deletecontact(string p) {
    node *node_delete = NULL;
    node* curr = head;
    int n;

    while (curr != NULL) {
        if( curr->phone == p) {
            cout <<curr->name << " " << curr->phone << endl;
        }
        curr = curr->next;

     node_delete=curr;
    }
    node_delete->prev->next = node_delete->next;
    if(node_delete->next != NULL) {
    node_delete->next->prev = node_delete->prev;
    }
    delete node_delete;
}*/
void deletecontact(string p) {
    node *node_delete = NULL;
    node* curr = head;

    while (curr != NULL) {
        if(curr->phone == p) {
            node_delete = curr;
        }
        curr = curr->next;
    }
    if(node_delete->prev != NULL)
    node_delete->prev->next = node_delete->next;

    if(node_delete->next != NULL)
    node_delete->next->prev = node_delete->prev;

    delete node_delete;
    if(node_delete == head) {
         node *newhead = head->next;
         delete head;
         head = newhead;
      }

}
void searchacontact(string p) {
    node *curr = head;
    int n =0;
    bool anyfound = false;
    while(curr != NULL) {
        if( curr->phone == p) {
            cout << ++n << ". " << curr->name << " " << curr->phone << endl;
            anyfound = true;
        }
        curr = curr->next;
    }
    if(!anyfound) cout << "Nothing found!" << endl;

}
void menu()
{
    cout << "1. Add a contact" << endl;
          cout << "2. Show All" << endl;
     cout<< "3. Delete a contact" <<endl;
         cout << "4. Search a contact" << endl;
         cout << "5. Exit" << endl;
}
int main()
{
    string n,p,np;
    int choice;
    readFile();
    do {
        menu();

    cout << "Your choice: ";
    cin >> choice;
    if (choice == 1) {
        cout << "Enter name: ";
        cin >>n;
        cout << "Enter number: ";
        cin >>p;
        add(n,p);

    }
     else if (choice == 3) {
        cout << "Enter contact name: ";
        cin >> n;
        deletecontact(n);
    } else if (choice == 2) {
        cout << "-----------------------------------------------------------------" << endl;
        display();
        cout << "-----------------------------------------------------------------" << endl;
    } else if (choice == 4) {
        cout << "Enter name or a number: ";
        cin >> np;
        cout << "-----------------------------------------------------------------" << endl;
        searchacontact(np);
        cout << "-----------------------------------------------------------------" << endl;
    }
    } while (choice !=5);
    writeFile();


    return 0;
}
