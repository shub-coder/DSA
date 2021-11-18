#include<bits/stdc++.h>
using namespace std;
int minimum(int x, int y, int z)
{
    return min(min(x,y), z);
}
int eD(string s1, string s2, int m, int n)
{
    if(m==0)
    return m;
    if(n==0)
    return n;
    if(s1[m-1]==s2[n-1])
    return eD(s1,s2,m-1,n-1);
    else
    return 1 + minimum(eD(s1, s2, m, m-1), eD(s1, s2, m-1, n), eD(s1, s2, m-1, n-1));
}
int main()
{
    int m,n;
    string s1,s2;
    cin>>s1>>s2;
    m=s1.length();
    n=s2.length();
    cout<<eD(s1,s2,m,n);
    return 0;
}