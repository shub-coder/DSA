#include<bits/stdc++.h>
using namespace std;
int main()
{
   unordered_set<int>s;
   s.insert(10);
   s.insert(20);
   s.insert(30);
   s.insert(40);
   s.begin();
   s.end();
   s.find(50);
   for(auto x:s)
   {
       cout<<x<<" ";
   }
   cout<<"\n";
   s.erase(20);
   for(auto x:s)
   {
       cout<<x<<" ";
   }
   cout<<"\n";
   s.count(30);

}

