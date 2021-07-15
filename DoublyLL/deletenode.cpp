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
void del(node *ptr)
{
    node *temp=ptr->next;
    ptr->data=temp->data;
    ptr->next=temp->next;
    delete(temp);
}