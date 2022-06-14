#include<bits/stdc++.h>
using namespace std;

vector<int> give_primes(int n){
    vector<int>div;

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            div.push_back(i);
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n > 1){
        div.push_back(n);
    }
    return div;
}
int main(){
    int n;
    cin >> n;

    int N = 1e5;
    int dp_prime[N];

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        vector<int>prime_div = give_primes(arr[i]);

        int bestEnding = 0;
        for(auto x: prime_div){
            bestEnding = max(bestEnding, dp_prime[x]);
        }
        for(auto x: prime_div){
            dp_prime[x] = bestEnding + 1;
        }
    }
    cout << *max_element(dp_prime, dp_prime + N);
}