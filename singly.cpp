#include<iostream>
using namespace std;
//IN LINKED LISTS PROGRAM, EVERYTHING IS DONR BY HEAD AND A TEMPORARY VARIABLE THAT TRAVERSE!
class node{
    public: 
    int value;
    node* next;// pointer to next node
    node(int v) //parameterized constructor
    {
        value=v;
        next=NULL;
    }
};
void insertAtTail(node* &head, int value)
{
    node* n= new node(value); //new node with passed value created
    if(head == NULL)//if LL is empty then head is n
    {
        head=n;
        return;
    }
    //if LL is not empty then
    node* temp=head;
    while(temp->next!=NULL)//traverse temp to the last node
    {
        temp=temp->next; 
    }
    temp->next=n; //add new node to the tail

}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)//traverse temp to the last node
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
}
void insertAtHead(node* &head , int value)
{
    node* n= new node(value); //create node with value
    n->next=head; //assign next node to previous head
    head=n; //set new head to the new node
}
bool search(node* head, int key)
{
    node* temp= head; //create temp node with value as first node
    while(temp != NULL) //traverse temp to the last node
    {
        if(temp->value==key) //if found
        {
            return true; //return true
        }
        temp=temp->next; //move to the node
    }
    //else
    return false;
}
void deleteAtHead(node* &head)
{
    node* todelete=head; //create temp node pointing head 
    head=head->next; //assign head to the next node
    delete todelete; //delete the previous node(temp node)
}
void deletion(node* &head, int key)
{
    if(head == NULL) //if no element found
    return; 
    if(head->next == NULL) //if single element found
    {
        deleteAtHead(head); //delete just the head
        return;
    }
    //else
    node* temp=head; //point temp to head
    while(temp->next->value!=key) //traverse temp until temp's next's value is key ie previous node of node to be deleted
    {
        temp=temp->next;
    }
    //now temp is the previous node of node to be deleted
    node* todelete=temp->next; //assign todelete node to temp's next
    temp->next=temp->next->next; //relink temp's next to next to next
    delete todelete; //delete middle node
}
node* reverseIterative(node* &head)//return type is node because we need to return new head in the reversed LL
{
    node* prevptr =NULL;
    node* currptr =head;
    node* nextptr; 
    while(currptr != NULL) {
        nextptr =currptr->next;
        currptr->next=prevptr; //reverse the direction of cuttent node from next to prev
        prevptr=currptr;
        currptr=nextptr;
    } //increment all 3 nodes
    return prevptr; //return new head thet is last node now
    //curr is at NULL, so prev is at last node
}
node* reverseRecursive(node* &head)//return type is node because we need to return new head in the reversed LL
{
    if(head == NULL||head->next == NULL) //if no element or only one element
    {
        return head;
    }
    node* newhead=reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;

}
node* reversek(node* &head, int k)//return type is node because we need to return new head in the reversed LL
{
    node* prevptr =NULL;
    node* currptr =head;
    node* nextptr; 
    int count = 0; //keep count <k
    while(currptr != NULL && count<k) { 
        nextptr =currptr->next;
        currptr->next=prevptr; //reverse the direction of cuttent node from next to prev
        prevptr=currptr;
        currptr=nextptr;
        count++;
    } //increment all 3 nodes
    if(nextptr!=NULL) {
        head->next=reversek(nextptr,k) ;
    }
    return prevptr;
}
bool detectCycle(node* &head)
{
    node* slow=head;
    node* fast=head; //start 2 pointers from head
    while(fast!=NULL  && fast->next != NULL)
    {
        slow=slow->next; //1 step increment
        fast=fast->next->next; //2 step increment
        if(fast==slow)  // if both meet each other then there must be cycle
        {
            return true;
        }
    }
    //else
    return false;
}
//FUNCTION FOR REMOVE CYCLES
//...



int main()
{
    node* head=NULL;
    //call functions or anything;
    //node* newhead=reverse(head);
    //insert into
    //display(newhead);
    return 0;
}
