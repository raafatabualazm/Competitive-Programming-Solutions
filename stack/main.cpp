#include <iostream>

using namespace std;
struct node {
    int data;
    node* next;
};
node* head = NULL;

void push(int x) {
    node* temp = new node();
    temp->data = x;
    temp->next = NULL;
    if (head == NULL) {
        head = temp;
    } else {
        temp->next = head;
        head = temp;
    }
}

void pop() {
    node* temp = head;
    if (head == NULL) return;
    else if (head->next == NULL) {
        head = NULL;
        delete temp;
    } else {
        head= head->next;
        delete temp;
    }
}

void display_stack() {
    node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
       temp = temp->next;
    }
    cout << endl;
}
int main()
{
    push(13);
    display_stack();
    push(15);
    display_stack();
    pop();
    display_stack();
    return 0;
}
