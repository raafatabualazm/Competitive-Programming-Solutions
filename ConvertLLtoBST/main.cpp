#include <iostream>

using namespace std;

struct LLnode {
    int data;
    LLnode *next;
};

LLnode *LLhead = NULL;

void insertLL(int d) {
    if(LLhead == NULL) {
        LLhead = new LLnode();
        LLhead->data = d;
        LLhead->next = NULL;
    } else {
        LLnode *temp = new LLnode();
        temp->data = d;
        temp->next = NULL;
        LLnode *curr = LLhead;
        while(curr->next != NULL) {
            curr=curr->next;
        }
        curr->next = temp;
    }
}


struct BSTnode
{
    int key;
    BSTnode *left;
    BSTnode *right;

};

BSTnode *head = NULL;
void insertBSTnode(BSTnode* root,int k)
{
    if (head == NULL) {
        head = new BSTnode();
        head->key = k;
    } else if (k > root->key) {
        if (root->right == NULL) {
            BSTnode *right_node = new BSTnode();
            right_node->key = k;
            root->right = right_node;
        } else {
            insertBSTnode(root->right,k);
        }
    } else if (k <= root->key) {
        if (root->left == NULL) {
            BSTnode *left_node = new BSTnode();
            left_node->key =k;
            root->left = left_node;

        } else {
            insertBSTnode(root->left,k);
        }
    }


}

void convertLLtoBST(LLnode *LLhead) {
    LLnode* curr = LLhead;
    while(curr != NULL) {
        insertBSTnode(head, curr->data);
        curr = curr->next;
    }

}
void display(BSTnode* root)
{
    if(root == NULL)
        return;
    display(root -> left);
    cout << root -> key << endl;
    display(root -> right);
}


int main()
{
    insertLL(1);
    insertLL(2);
    insertLL(3);
    convertLLtoBST(LLhead);
    display(head);
    return 0;
}
