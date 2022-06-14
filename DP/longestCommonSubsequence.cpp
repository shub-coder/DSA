#include<bits/stdc++.h>
using namespace std;

int lcs(int i, int j, string a, string b){
    if (i == a.size() && j == b.size()) return 0;
	if (i == a.size()) return 0;
	if (j == b.size()) return 0;

	int ans = 0;
	if (a[i] == b[j]) {
		ans = 1 + lcs(i + 1, j + 1, a, b);
	}
	else {
		ans = max(lcs(i, j + 1, a, b), lcs(i + 1, j, a, b));
	}

	return ans;
}
int main(){
    string a, b;
    cin >> a >> b;
    cout << lcs(0, 0, a, b);
    return 0;
}
