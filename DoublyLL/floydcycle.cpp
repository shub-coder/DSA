#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
    node(int x)
    {
        data=x;
        next=prev=NULL;
    }
};
bool loop(node *head, int x)
{
    node *temp=new node(x);
    node *slow=head;
    node *fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next;
        if(slow==fast)
           return true;
    }
    return false;
}