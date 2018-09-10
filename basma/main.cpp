#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

struct node{
    string name;
    double balance;
    node* next;
    node* pre;
};

void addattail(node* &head, string n, double b){
    node* myNode = new node;
    myNode -> name = n;
    myNode -> balance = b;
    myNode -> next = NULL;
    myNode -> pre = NULL;
   	 node* temp = head;

	if(head == NULL) {
		head = myNode;
		return;
	}
	else{
	while(temp->next != NULL){
    temp = temp->next;
    } // Go To last Node
	temp->next = myNode;
	myNode ->pre = temp;
   /* if (last->next==NULL)
    {
    myNode ->next=NULL;
    myNode->pre =last;
    last->next=myNode;
    last  = myNode;
    }
    else
    last=last->next; */
	}
}
void addathead(node* &head, string n, double b){
    node* myNode = new node;
    myNode -> name = n;
    myNode -> balance = b;
    myNode -> next = NULL;
    myNode -> pre = NULL;
    node* temp = head;
    head = myNode;
    if (temp != NULL) {
        temp->pre = head;
        head->next = temp;
    }
}

void display(node* head)
{
    node* temp = head;

    while(temp  != NULL)
    {
        cout << temp -> name << " " << temp -> balance <<endl;
        temp = temp -> next;
    }
}

void searchCustomer(node* head, string n)
{
    node* temp = head;
    while(temp != NULL)
    {
        if(temp -> name == n){
            cout << temp -> name << " " << temp -> balance <<endl;
            return ;
        }
        temp = temp -> next;
    }
}

void Delete(node* &head,string n)
{
    node* temp = head;
    while(temp != NULL)
    {
        if(temp -> name == n){
            cout << temp -> name << " " << temp -> balance << " will be deleted"<<endl;
            break;
        }
        temp = temp -> next;
    }
    if (temp == head) {
            head = head->next;
            delete temp;
        } else if (temp->next == NULL) {
            temp->pre->next = NULL;
            delete temp;
        } else {
            temp->pre->next = temp->next;
            temp->next->pre=temp->pre;
            delete temp;
        }
}
node* readCustomers()
{   // Read from file into a linked list
    ifstream infile;
    infile.open("bank.txt");
    node* head = new node; // Instead of node* head;
    node* last;
    bool f = false;

//    while(!infile.eof())
//    {
//
//        infile >> n;
//        infile >> b;
//        if(f==false){
//            head = new node;
//            head -> name = n;
//            head -> balance = b;
//        }
//        else
//            addattail(head, n, b);
//        f=true;
//    }
    string n; double b; // make the variables declaration outside of the loop
    while (infile >> n >> b) {
        if (f == false) {
                head->name =n;
                head->balance=b;
                head->pre = NULL;
                head->next = NULL;
                f = true;
        } else {
            addattail(head,n,b);
        }
    }
    infile.close();

    return head;
    // Return Linked List
}

void writeCustomers(node* head)
{
    ofstream outfile;
    outfile.open("bank.txt");

    node* curr = head;
    if (head == NULL) return;
    while(curr -> next != NULL)
    {
        outfile << curr -> name << " " << curr -> balance <<endl;
        curr = curr -> next;
    }
    outfile << curr -> name << " " << curr -> balance;
    outfile.close();
}

/*void deposit(node* head,node* last, string n, double amount)
{
    node* curr = head;
    while(curr != NULL)
    {
        if(curr -> name == n){
            curr -> balance += amount;
            cout << "Done. Balance updated!";
            return ;
        }
        curr = curr -> next;
    }
}

void withdraw(node* head,node* last, string n, double amount)
{
    node* curr = head;
    while(curr != NULL)
    {
        if(curr -> name == n){
            if(amount > curr -> balance)
                cout << "Process failed. Can't withdraw the required amount!";
            else{
                curr -> balance -= amount;
                cout << "Done. Balance updated!";
            }
            return ;
        }
        curr = curr -> next;
    }

} */

int main()
{
char c;
node* head = readCustomers();
string name,wanted,del;
double balance;
int x;

do
{
  cout <<"    "<<" choose the operation you want ......"<<endl;
  cout<<"1- insert client at end "<<endl<<"2- insert client at beginning"<<endl;
  cout<<"3- display all clients  "<<endl<<"4- search for a client "<<endl;
  cout <<"5- delete a client "<<endl;
 // cout<<"*************************************"<<endl;
  cin>>x;
  if (x==1)
  {
     cout<<"enter the name and the balance:"<<endl;
     cin >>name>>balance;
     addattail(head,name,balance);
  }
  else if (x==2)
  {
     cout<<"enter the name and the balance:"<<endl;
     cin >>name>>balance;
     addathead(head,name,balance);
  }
  else if(x==3)
  {
      display(head);
  }
  else if(x==4)
  {
      cout<<"enter name you want to search "<<endl;
      cin>>wanted;
      searchCustomer(head,wanted);
  }
  else if(x==5)
  {
      cout<<"enter the name you want to delete"<<endl;
      cin>>del;
      Delete(head,del);
  }
  else
    cout<<"number you entered is not valid , please enter number from 1 to 5 as shown"<<endl;
    cout<<"do you want to do another operation ? y/n "<<endl;
    cin>>c;
} while (c == 'y');
writeCustomers(head);
    return 0;
}


