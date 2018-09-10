#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int key;
    struct node* next;
} node;

void insert(node* head, int data) {
    node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    node* newNode = (node*)malloc(sizeof(node));
    newNode->key = data;
    newNode->next = NULL;
    temp->next = newNode;
}
int main()
{
    node* node1;
    node1 = (node*)malloc(sizeof(node));
    node1->key = 3;
    node1->next = NULL;
    insert(node1,4);
    insert(node1,5);


    return 0;
}
