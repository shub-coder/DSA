#include<bits/stdc++.h>
using namespace std;

int lcs(string s1, string s2, int m, int n)
{
    int memo[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            memo[m][n]=-1;
        }
    }
    if(memo[m][n]!=-1)
    return memo[m][n];
    if(m==0 || n==0)
    memo[m][n]=0;
    else
    {
        if(s1[m-1]==s2[n-1])
        memo[m][n]=1+lcs(s1,s2,m-1,n-1);
        else
        memo[m][n]=max(lcs(s1,s2,m-1,n), lcs(s1,s2,m,n-1));
    }
    return memo[m][n];
}
int main()
{
    int m,n;
    string s1,s2;
    cin>>s1>>s2;
    m=s1.length();
    n=s2.length();
    cout<<lcs(s1,s2,m,n);
    return 0;
}