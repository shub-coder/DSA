#include <bits/stdc++.h>
using namespace std;

struct node 
{
    int data;
    node *next,*prev;
    node(int x)
    {
        data=x;
        next=prev=NULL;
    }
};
bool isLoop(node *head, int x)
{
    node *temp=new node(x);
    node *curr=head;
    while (curr!=NULL)
    {
        if(curr->next!=NULL)
          return false;
        if(curr->next==temp)
           return true;
        node *curr_next=curr->next;
        curr->next=temp;
        curr=curr->next;     
    }
    return false;
    
}