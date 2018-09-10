#include<iostream>
using namespace std;
struct node {

int value;
node *next;
} ;

node *head = NULL; // Made this global to avoid pass by reference
     node *last = NULL; // Made this global to avoid pass by reference
bool Empty(node *head)
{
    if (head ==NULL)
        return true;
    else
        return false;
}
void add(int value)
{
    if (head == NULL)
    {
     head = new node();
     head->value=value;
     head->next=NULL;

     last = head; //  instead of last = temp
    }
    else
    {
        node *temp = new node(); //You forgot = new node()
        temp->value=value;
        temp->next=NULL;
        last->next=temp; // last->next = temp instead of = NULL
        last=temp;
    }
}
void show ()
    {
    node *curr;
    curr=head;
    if (Empty(head)) // Instead of bool(head)
        cout<< "the list is empty"<<endl;
    else
        while (curr!=NULL)
    {
        cout<< curr->value << " "<<endl;
        curr= curr->next;
    }
      }
void Remove()
{
    if (Empty(head)) // Instead of bool(head)
       cout<< "the list is empty"<<endl;
    else if (head==last)
    {
        //head->next=NULL;
        //head=head->next;

        // Does this mean the only node is the head?
        delete head;
    }
    else
    {
        node *temp;
        temp=head;
       head=head->next;
       delete temp;
    }
}
void menu ()
{
cout<< "menu"<<endl;
cout<< "1-add"<<endl;
cout<< "2-show"<<endl;
cout<< "3-remove"<<endl;
cout<< "4-exit"<<endl;
}
int main()
{

     int value;
     int x;

     do {
            menu();
      cin >> x;
         //menu;
            switch (x)
            {
            case (1):
                {
                    cout<< "enter a value"<<endl;
                    cin>>value;
                    add(value);

                }
                break;
            case(2):
                {
                    show() ;
                }
                break ;
                case(3):
                    {
                        Remove();
                    }
                    break;

        default:
;            }
     }while (x!=4);
     return 0;
}
