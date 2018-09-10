#include <bits/stdc++.h>

using namespace std;
struct node{
    int value;
    node *next;

};

void add(node* head, int val) {
    node *current = head;
    node *new_node = new node;
    while(current-> next != NULL) {
        current = current->next;
    }
    new_node->value = val;
    current->next = new_node;

}

int main()
{
    node *head = new node;
    head->value = 35;
    add(head, 78);
    add(head, 89);
    add(head, 108);


    return 0;
}
