#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x)
    {
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
void middle(node *head)
{
    if(head==NULL)
       return;
    node *slow=head;
    node *fast=head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<(slow->data);
}
void print(node *head)
{
    node *curr=head;
    while(curr!=NULL)
    {
        cout<<(curr->data)<<" ";
        curr = curr->next;
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
   middle(head);
   return 0;
}