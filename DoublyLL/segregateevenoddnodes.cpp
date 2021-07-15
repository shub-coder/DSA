#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next,*prev;
    node (int x)
    {
        data=x;
        next=prev=NULL;
    }
};
node *segregate(node *head)
{
    node *es=NULL, *ee=NULL, *os=NULL, *oe=NULL;
    for(node *curr=head; curr!=NULL; curr=curr->next)
    {
        int x=curr->data;
        if(x%2==0)
        {
            if(es==NULL)
            {
                es=curr;
                ee=es;
            }
            else
            {
                ee->next=curr;
                ee=ee->next;
            }
        }
        else
        {
            if(os==NULL)
            {
                os=curr;
                oe-os;
            }
            else
            {
                oe->next=curr;
                oe=oe->next;
            }
            
        }
    }
    if(os==NULL || es==NULL)
       return;
    ee->next=os;
    oe->next=NULL;
    return es;   
}