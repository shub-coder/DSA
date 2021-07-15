#include <bits/stdc++.h>
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
node *insert(node *next, int x)
{
    node *temp=new node(x);
    temp->next=next;
    return temp;
}
node *deletelast(node *head)
{
    node *curr=head;
    if(head==NULL)
      return NULL;
    if(head->next==NULL)
      return NULL;
    while(curr->next->next!=NULL)
    {
        curr=curr->next;
    }  
    delete(curr->next);
    curr->next=NULL;
    return head;
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
    node *head=NULL;
    head=insert(head,30);
    head=insert(head, 20);
    head=insert(head,10);
    print(head);
    cout<<"\n";
    head=deletelast(head);
    print(head);
    return 0;

}