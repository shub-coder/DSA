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
void removeduplicates(node *head)
{
    node *curr=head;
    while(curr!=NULL && curr->next->next!=NULL)
    {
        if(curr->data==curr->next->data)
        {
            node *temp=curr->next;
            curr->next=curr->next->next;
            delete(temp);
        }
        else
        curr=curr->next;
    }
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
   head=  insert(head, 40);
   head= insert(head, 40);
   head = insert(head, 50);
   print(head);
   cout<<"\n";
   removeduplicates(head);
   print(head);
   return 0;
}