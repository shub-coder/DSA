#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next, *prev;
    node(int x)
    {
        data=x;
        next=prev=NULL;
    }
};
node *insert(node *head, int data)
{
    node *temp=new node(data);
    temp->next=head;
    if(head!=NULL)
       head->prev=temp;
    return temp;   
}
node *insertend(node *head, int data)
{
    node *temp=new node(data);
    node *curr=head;
    if(head==NULL)
    {
        return temp;
    }
    else
    {
      while(curr->next!=NULL)
      {
          curr=curr->next;
      }
      curr->next=temp;
      temp->prev=curr;
      //curr->next=NULL;
    }
    return head;
}

void print(node *head) {
   node* curr;
   curr = head;
   while(curr != NULL) {
      cout<< curr->data <<" ";
      curr = curr->next;
   }
}
int main() {
    int n,n1;
   node *head = NULL;
   head = insert(head, 40);
   head = insert(head, 30);
   head=  insert(head, 20);
   head= insert(head, 10);
   print(head);
   cout<<"\n";
   cout<<"Enter element to insert at end"<<"\n";
   cin>>n1;
   insertend(head, n1);
   print(head);
   cout<<"\n";
    return 0;

}