#include <iostream>

using namespace std;

struct BSTnode {
    int key_value;
    BSTnode* left;
    BSTnode* right;

};

void insertBSTnode(BSTnode* root, value)
{
    BSTnode* newNode = new BSTnode();
    newNode->key_value = value;
    newNode->left = NULL;
    newNode->right = NULL;
    if (root->key_value < value) {
            if (root->left == NULL) {
                root->left = newNode;
            } else {
                insert
            }
    }

}

void display(BSTnode* root)
{
   if(root == NULL) return;
   display(root->left);
   root->key_value;
   display(root->right);
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
