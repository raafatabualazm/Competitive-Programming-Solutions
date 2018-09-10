#include <iostream>


using namespace std;

struct node {
    int data;
    node* next;
};

node* frontNode = NULL;
node* tail = NULL;

void enqueue(int x) {
    node* temp = new node();
    temp->data = x;
    temp->next - NULL;
    if (frontNode == NULL && tail == NULL) {
        frontNode = tail = temp;
    } else {
        tail->next = temp;
        tail = temp;
    }
}

void dequeue() {
    node* temp = frontNode;
    if (frontNode == tail) {
        frontNode = tail = NULL;
    } else {
        frontNode = frontNode->next;
    }
    delete temp;
}

void display() {
    node* temp = frontNode;
    while (temp != NULL) {
        cout << temp-> data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    enqueue(13);
    enqueue(15);
    display();
    dequeue();
    display();
    return 0;
}
