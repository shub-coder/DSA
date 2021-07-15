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
node *insertpos(node *head, int pos, int x)
{
    
    node *temp=new node(x);
    if(pos==1){
      temp->next=head;
      return temp;}
    node *curr=head;   
    for(int i=1; i<=pos-2 && curr!=NULL; i++)
        curr=curr->next;
    if(curr==NULL)
    {
        return head;
    }    
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
    head=insertpos(head,2,20);
    print(head);
    return 0;

}

