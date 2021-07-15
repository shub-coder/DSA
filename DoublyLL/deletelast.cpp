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
node *dellast(node *head)
{
    if(head==NULL)
      return NULL;
    if(head->next==NULL)
    {
        delete(head);
        return NULL;
    }  
    else
    {
        node *curr=head;
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        curr->prev->next=NULL;
        delete(curr);
        return head;
    }
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
   
   //deletefirst(head);
   dellast(head);
   print(head);
   //cout<<"\n";
    return 0;

}