#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct node{
    int index;
    string name,phone;
    node *left;
    node *right;
};
node* root = NULL;
void addCont(node *root,int v, string n, string p)
{ node *t= new node;
     if(root == NULL)
    {   t->index = v;
        t->name = n;
        t->phone = p;
        t->right = NULL;
        t->left = NULL;
        root =t;
    }

    if((v<=root->index))
    {
        if (root->left == NULL) {
        t->index=v;
        t->name=n;
        t->phone=p;
        root->left=t;
        } else {
            addCont(root->left,v,n,p);
        }
    }
    else if ((v>root->index))
    {
        if (root->right == NULL) {
      t->index=v;
      t->name=n;
      t->phone=p;
      root->right=t;
        } else {
            addCont(root->right,v,n,p);
        }
    }

}

void show(node *root)
{
    if(root==NULL) return;
    show (root->left);
    cout<<"index\t"<<root->index<<endl;
    cout << "Name\t" << root->name << endl;
    cout << "Phone\t" << root->phone << endl;
    show(root->right);

}

void searchCont(node* root,string n,bool &ch)
{
    if(root == NULL)
        cout << "Contact list is empty." << endl;
    else
    {
        if(root->left)
            searchCont(root->left,n,ch);
        if(root->name == n)
        {
            cout << "Index --> " << root->index << endl;
            cout << "Name  --> " << root->name << endl;
            cout << "Phone --> " << root->phone << endl << endl;
            ch = 0;
        }
        if(root->right)
            searchCont(root->right,n,ch);
    }
}

void deleteIndex(node* root,string n,int &x,bool &a)
{
    if(root!=NULL)
    {
        if(root->name == n)
        {
            x = root->index;
            a = 1;
        }
        if(root->left)
        deleteIndex(root->left,n,x,a);
        if(root->name == n)
        {
            x =  root->index;
            a = 1;
        }
        if(root->right)
            deleteIndex(root->right,n,x,a);
    }
}

node* deleteCont(node *root, int pos)
{
    if(root==NULL)
        return root;
    else if (pos < root->index)
        root -> left = deleteCont(root->left,pos);     ///184 to 187 finding the node to be deleted
    else if (pos > root->index)
        root -> right = deleteCont(root->right,pos);
    else                                              /// The node to be deleted is found
    {
        if(root->left == NULL && root->right == NULL)   ///No Child
            root == NULL;
        else if(root->left == NULL)                    /// One child (right child)
            root = root->right;
        else if(root->right == NULL)                   /// One child (left child)
            root = root->left;
        /*else                                           /// Two Children (Left & Right)
        {
            node *temp = FindMin(root->right);
			root->index = temp->index;
			root->name = temp->name;
			root->phone = temp->phone;
			root->right = deleteCont(root->right,temp->index);
        }*/
    }
}


/*node* FindMin(node* root)
{
    node* temp = root;
    while(temp -> left != NULL)
        temp = temp->left;
    return temp;
}*/

node* readFromFile()
{
    ifstream myfile;
    myfile.open("contacts.txt");

    int i;
    string  n , p;
    int idx = 1;
    while(!myfile.eof())
    {
        myfile >> i >> n >> p;

        addCont(root, i, n, p);
    }
    myfile.close();
    return root;
}


void writeToFile(node* root)
{
    ofstream myfile;
    myfile.open("contacts.txt");
    if(root== NULL)return;
        writeToFile(root -> left);
        writeToFile(root -> right);
    myfile << root -> index  << "\t" << root -> name << "\t" << root -> phone<< endl;
    myfile.close();
}
int main()
{
    node *root = NULL;
    root = readFromFile();
    cout << "\t\t\t*Binary Search Tree*"<<endl << endl;
    int choice,pos;
    string name,phone;
    char check;
    do
    {
        cout << "Press --> 1 : To show contacts." << endl;
        cout << "Press --> 2 : To add a contact." << endl;
        cout << "Press --> 3 : To delete a contact." << endl;
        cout << "Press --> 4 : To search for a contact." << endl << "Choice --> ";
        cin >> choice;
        cout << endl << endl;
        if(choice == 1)
        {
            show(root);
        }
        else if(choice == 2)
        {
            cout << "Enter the name, number and index of the contact you want to add." << endl;
            cout << "Name  --> ";
            cin >> name;
            cout << "Phone --> ";
            cin >> phone;
            cout << "Index --> ";
            cin >> pos;
            cout << endl << endl;
            addCont(root,pos,name,phone);
        }
        else if(choice == 3)
        {
            cout << "Enter the name of the contact you want to delete." << endl;
            cout << "Name --> ";
            cin >> name;
            int x;
            bool a = 0;
            deleteIndex(root,name,x,a);
            if(a)
            {
                while(a)
                {
                    root = deleteCont(root,x);
                    a = 0;
                    deleteIndex(root,name,x,a);
                }
                cout << "All the contacts with that name is deleted" << endl;
            }
            else
                cout << "Contact Doesn't Exist" << endl;
        }
        else if(choice == 4)
        {
            bool ch = 1;
            cout << "Enter the name you want to search for." << endl;
            cout << "Name --> ";
            cin >> name;
            cout << endl << endl;
            searchCont(root,name,ch);
            if(ch)
                cout << "Contact Doesn't Exist" << endl;
        }
        else
            cout << "Not a valid choice" << endl;
        cout << endl;
        cout << "Would you like to continue ? ( Y / N )" << endl;
        cout << "Entry --> ";
        cin >> check;
        cout << endl;
    }while(check == 'y' || check == 'Y');
    cout << "Would you like to save the new updated contacts in file ? (Y / N).";
    cout << "Entry --> ";
    cin >> check;
    if(check == 'y' || check == 'Y')
    {
        cout << "Saving and closing ..." << endl;

      writeToFile(root);

    }
    else
        cout << "Closing without saving ..." << endl;
    return 0;
}
