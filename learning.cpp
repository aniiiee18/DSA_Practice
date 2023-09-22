#include<bits/stdc++.h>
using namespace std;


//creating a node
class node{
 public:

    int data;    //data which is in the node;
    node *next;  //pointer poiting to next address of next element

    //creating constructor
    node(int a)
    {
        this->data = a;
        this->next = NULL;
    }

};

void insertattail(node* &tail, int d)
{   
    //creating a new node
    node* temp = new node(d);
    tail->next = temp;
    tail = temp;

}


void insertathead(node* &head, int d)
{
    //creating a new node 
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}


void print(node* &head)
{
    node* temp = head;
    while(temp != NULL )
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{   //created a new node

    // node* node1 = new node;          // first call without constructor
    node* node1 = new node(10);         //when you made a constructor this call would be implemented
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;



    //head pointing to the node1;
    node* head = node1;
    node* tail = node1;
    // print(head);
    // print(tail);
    
    // insertathead(head, 12);  //inserting at head
    // print(head);

    // insertattail(tail, 12);  //inserting at tail
    // print(head);
    



    // insertathead(head, 15);  //inserting at head
    // print(head);

    // insertattail(tail, 15);  //inserting at tail
    // print(head);
  



    // insertathead(head, 20);  //inserting at head
    // print(head);  

    // insertattail(tail, 20);  //inserting at tail
    // print(head);  
 }