#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        v1.push_back(x);
        v2.push_back(y);
        v3.push_back(z);
    }
    
        int a = v1[0] + v2[0] + v3[0];
        int b = v1[1] + v2[1] + v3[1];
        int c = v1[2] + v2[2] + v3[2];

        if(a==b && b==c && a==c)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    return 0;
}