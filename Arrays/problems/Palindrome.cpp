#include <bits/stdc++.h>
using namespace std;

#include <iostream>

using namespace std;

  bool isPalindrome(int x) {
        int a=x;
        unsigned long long sol=0;
        if(x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        while(x>0)
        {
            unsigned long long rem=x%10;
           
            sol = (sol*10)+rem;
            x=x/10;
        }
        if(sol==a)
            return true;
        else
            return false;
            
    }
int main()
{
    int x;
    cin>>x;
    cout<<isPalindrome(x);

    return 0;
}
