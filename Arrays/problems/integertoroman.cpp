#include <bits/stdc++.h>
using namespace std;

string intToRoman(int num) {
        string res;
        int numeral[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    int i=12;   
    while(num>0)
    {
      int div = num/numeral[i];
      num = num%numeral[i];
      while(div--)
      {
        res.append(sym[i]);
      }
      i--;
    }
        return res;
}