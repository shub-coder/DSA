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
node *insert(node *head, int x)
{
    node *curr=head;
    node *temp=new node(x);
    if(head==NULL)
      return temp;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }  
    curr->next=temp;
    return head;
}
node *sortedinsert(node *head, int x)
{
    
    node *temp=new node(x);
    if(head==NULL){
      return temp;}
    if(x<head->data)
    {
        temp->next=head;
        return temp;
    }  
    node *curr=head;   
    while(curr->next!=NULL && curr->next->data<x)
        curr=curr->next;  
    temp->next=curr->next;
    curr->next=temp;
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
    head=insert(head,50);
    head=insert(head,40);
    head=insert(head, 30);
    head=insert(head,10);
    print(head);
    cout<<"\n";
    head=sortedinsert(head,20);
    print(head);
    return 0;

}