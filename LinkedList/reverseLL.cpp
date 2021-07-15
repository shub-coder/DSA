/*#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};
node *insert(node *head, int x)
{
    node *temp=new node(x);
    if(head==NULL)
    {
        return temp;
    }
    node *curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}
node *reverse(node *head)
{
    node *curr=head;
    node *prev=NULL;
    node *nex=NULL;
    while(curr!=NULL)
    {
       nex=curr->next;
       curr->next=prev;
       prev=curr;
       curr=nex;
    }
    return prev;
}
void print(node *head)
{
    node *curr=head;
    while(curr!=NULL)
    {
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
}
int main()
{
   node *head = NULL;
   head = insert(head, 10);
   head = insert(head, 20);
   head=  insert(head, 30);
   head= insert(head, 40);
   head = insert(head, 50);
   print(head);
   cout<<"\n";
   reverse(head);
   cout<<"\n";
   print(head);
   return 0;
}*/

// Iterative C++ program to reverse
// a linked list
#include <iostream>
using namespace std;
 
/* Link list node */
struct Node {
    int data;
    struct Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
 
struct LinkedList {
    Node* head;
    LinkedList() { head = NULL; }
 
    /* Function to reverse the linked list */
    void reverse()
    {
        // Initialize current, previous and
        // next pointers
        Node* current = head;
        Node *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            // Store next
            next = current->next;
 
            // Reverse current node's pointer
            current->next = prev;
 
            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        head = prev;
    }
 
    /* Function to print linked list */
    void print()
    {
        struct Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
 
    void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};
 
/* Driver code*/
int main()
{
    /* Start with the empty list */
    LinkedList ll;
    ll.push(20);
    ll.push(4);
    ll.push(15);
    ll.push(85);
 
    cout << "Given linked list\n";
    ll.print();
 
    ll.reverse();
 
    cout << "\nReversed Linked list \n";
    ll.print();
    return 0;
}