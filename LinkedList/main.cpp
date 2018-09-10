#include <iostream>

using namespace std;

struct node
{
    int value;
    node *next;
};

void add(node* head, int val)
{
    node* curr = head;
    node* temp = new node();
    temp->value = val;
    temp->next = NULL;
    while(curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
}

void addAtBeginning(node* &head, int val)
{

    node* new_head = new node();
    new_head->value = val;
    new_head->next = head;
    head = new_head;

}
void insertAtposN(node* &head, int val, int n)
{
    node* curr = head;
    bool valid = true;
    if (n == 0)
    {
        node* new_head = new node();
        new_head->value = val;
        new_head->next = head;
        head = new_head;
    }
    else
    {

        for (int pos =0; pos < n-1; pos++)
        {
            if (curr ->next != NULL)
            {
              curr = curr->next;
            }
            else
            {
               add(head, val);
               valid = false;
               break;
            }
        }

    }
    if(valid)
    {
        node* temp = new node();
        temp->value = val;
        temp->next = curr->next;
        curr->next = temp;
    }
}

void showList(node* head)
{
        node* curr = head;
    do
    {
        cout << curr->value << " ";
        curr = curr->next;
    } while (curr != NULL);
    cout << endl;
}

void deleteAtposN(node* &head, int n)
{
    node* curr = head;
    bool valid = true;
    if (n == 0)
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
        for (int pos =0; pos < n-1; pos++)
        {
            if (curr->next != NULL)
            {
              curr = curr->next;
            }
            else
            {
                cout << "Index out of scope, nothing will be deleted." << endl;
                valid = false;
                break;
            }
        }

    }
    if(valid)
    {
        node* temp2 = curr->next;
        curr->next = curr->next->next;
        delete temp2;
    }
}

void searchList(node *head, int val) {
    node* curr = head;
    int position = 1;
    bool found = false;
    while(curr != NULL) {
        if(curr->value == val) cout << "Found at: " << position << endl;
        position++;
        curr = curr->next;
        found = true;
    }
    if(!found) cout << "Not found.";
}
int main()
{

    node* head = new node();
    cout << "In the beginning you must create a head" << endl
    << "Please enter its value: ";
            cin >> head->value;
            head->next = NULL;
    int choice;
    int value;
    int n;
    system("cls");
    do
    {
        if (head != NULL) {
        cout << "1- Add" << endl
        << "2- Add at the beginning" << endl
        << "3- Insert at position n (Index starts from 0)" << endl
        << "4-Delete from pos n" << endl
        << "5- Show" << endl
        << "6- Exit" << endl
        << "Your choice: ";
        cin >> choice;
        if (choice == 1)
        {
            cout << endl << "Enter value: ";
            cin >> value;
            add(head, value);
            system("cls");
        }
        else if (choice == 2)
        {
            cout << endl << "Enter value: ";
            cin >> value;
            addAtBeginning(head, value);
            system("cls");
        }
        else if (choice == 3)
        {
            cout << endl << "Enter value: ";
            cin >> value;
            cout << "Enter position: ";
            cin >> n;
            insertAtposN(head, value,n);
            system("cls");
        }
        else if (choice == 4)
        {
            cout << endl << "Enter position: ";
            cin >> n;
            deleteAtposN(head, n);
            system("cls");
        }
        else if (choice == 5)
        {
            cout << endl;
            showList(head);
            cout << endl;
        }
        }

    } while (choice != 6);
    return 0;
}
