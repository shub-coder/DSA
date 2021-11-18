#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    else
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    cout<<"enter the nth term you want"<<endl;
    cin>>n;
    cout<<fib(n);
    cout<<endl;
    return 0;
}