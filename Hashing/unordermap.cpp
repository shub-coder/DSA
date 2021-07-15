#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string,int>mp;
    mp["shubhendu"]=48;
    mp["harshit"]=36;
    mp.insert({"jayesh", 69});
    for(auto x: mp)
       cout<<x.first<<" "<<x.second<<" ";


    //unordered_map<string, int> umap;
 
    // inserting values by using [] operator
    /*umap["GeeksforGeeks"] = 10;
    umap["Practice"] = 20;
    umap["Contribute"] = 30;

    umap.insert({"jayesh",69});
 
    // Traversing an unordered map
    for (auto x : umap)
      cout << x.first << " " << x.second << endl;*/
}

