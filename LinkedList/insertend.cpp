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
    head=insert(head,50);
    print(head);
    return 0;

}