#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;


struct BSTnode
{
    int key;
    string name;
    string phone;
    BSTnode *left;
    BSTnode *right;

};

BSTnode *head = NULL;
bool isFirstElement = true;
vector<BSTnode*> adress;
void insertBSTnode(BSTnode* root,int k,string n, string p)
{
    if (head == NULL) {
        head = new BSTnode();
        head->key = k;
        head->name =n;
        head->phone =p;
    } else if (k > root->key) {
        if (root->right == NULL) {
            BSTnode *right_node = new BSTnode();
            right_node->key = k;
            right_node->name = n;
            right_node->phone =p;
            root->right = right_node;
        } else {
            insertBSTnode(root->right,k,n,p);
        }
    } else if (k <= root->key) {
        if (root->left == NULL) {
            BSTnode *left_node = new BSTnode();
            left_node->key =k;
            left_node->name =n;
            left_node->phone =p;
            root->left = left_node;

        } else {
            insertBSTnode(root->left,k,n,p);
        }
    }


}

void display(BSTnode* root)
{
    if(root == NULL)
        return;
    display(root -> left);
    cout << root -> key << " " << root -> name << " " << root -> phone << endl;
    display(root -> right);
}

void writeFile(BSTnode *root, ofstream &outFile) {
    if (root == NULL) return;
    writeFile(root->left, outFile);
    outFile << root->key << " " << root->name << " " << root->phone << endl;
    writeFile(root->right, outFile);

}


void readFile()
{
    ifstream infile;
    infile.open("contacts.txt");
    int k;
    string n, p;
    while(infile >> k >> n >>p) {
        insertBSTnode(head,k,n,p);
    }
}

void searchBST(BSTnode* root, string n) {

    if(root== NULL) {
        return;
    } else {
        if(root->name == n) {
            cout << root->key << " " << root->name << " " << root->phone << endl;
            adress.push_back(root);
        }
        searchBST(root->right,n);
        searchBST(root->left,n);
    }
}

int getKey(BSTnode* root, string n) {
    searchBST(root,n);
    for (int i =0; i < adress.size(); i++ ) {
        cout << i+1 << ". " << adress[i]->key << " " << adress[i]->name << " " << adress[i]->phone << endl;
    }
    cout << "Which one do you want to delete: ";
    int choice;
    cin >> choice;
    BSTnode *node_delete = adress[choice-1];
    return node_delete->key;
}

BSTnode* findMin(BSTnode* root) {
    if(root->left == NULL) {
        return root;
    } else {
        findMin(root->right);
    }
}

BSTnode* deleteBSTnode(BSTnode* root,int key) {

    if (root == NULL) return root;
    else if (root->key > key) root->left = deleteBSTnode(root->left,key);
    else if (root->key < key) root->right = deleteBSTnode(root->right,key);
    else {
        if(root->left == NULL && root->right == NULL) {
            delete root;
            root = NULL;
        } else if (root->left == NULL && root->right != NULL) {
            BSTnode *temp = root;
            root = root->right;
            delete temp;
        } else if (root->left != NULL && root->right == NULL) {
            BSTnode *temp = root;
            root = root->left;
            delete temp;
        } else {
            BSTnode *temp = findMin(root->right);
            root->key = temp->key;
            root->name = temp->name;
            root->phone = temp->phone;
            deleteBSTnode(root->right, temp->key);
        }
    }
    return root;
}

int main()
{
    readFile();
    int choice, key;
    string n,p;
    do {
    cout << "1. Enter a new contact" << endl
         << "2. Search for a contact" << endl
         << "3. Delete a contact" << endl
         << "4. Show all" << endl
         << "5. Exit" << endl
         << "Your choice: " << endl;
    cin >> choice;
    switch(choice) {
    case 1:
        cout << "Enter name: ";
        cin >> n;
        cout << "Enter phone: ";
        cin >> p;
        cout << "Enter key: ";
        cin >> key;
        insertBSTnode(head,key,n,p);
        break;
    case 2:
        cout << "Enter a name: ";
        cin >> n;
        searchBST(head,n);
        break;
    case 3:
        cout << "Enter a name: ";
        cin >> n;
        key = getKey(head, n);
        deleteBSTnode(head, key);
        break;
    case 4:
        display(head);
    }
    } while (choice != 5);
    ofstream outFile;
    outFile.open("contacts.txt");
    writeFile(head, outFile);
    outFile.close();
    return 0;
}
