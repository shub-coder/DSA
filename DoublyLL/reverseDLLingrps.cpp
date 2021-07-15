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
node *reverse(node *head, int k)
{
    node *curr=head;
    node *prev=NULL;
    node *next=NULL;
    int c=0;
    while(curr!=NULL && c<k)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=prev;
        c++;
    }
    if(next!=NULL)
    {
        node *rest_head=reverse(next,k);
        head->next=rest_head;
    }
    return prev;
  
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
    int k;
    cin>>k;
   node *head = NULL;
   head= insert(head, 60);
   head= insert(head, 50);
   head = insert(head, 40);
   head = insert(head, 30);
   head=  insert(head, 20);
   head= insert(head, 10);
   
   print(head);
   cout<<"\n";
   head=reverse(head, k);
   print(head);
    return 0;

}