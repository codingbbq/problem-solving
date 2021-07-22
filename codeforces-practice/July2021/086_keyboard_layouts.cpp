//
//   Codeforces - B. Keyboard Layouts
//   https://codeforces.com/problemset/problem/831/B
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s1, s2, x;
    cin >> s1;
   	cin >> s2;
   	cin >> x;

   	map<char, char> keyboard;

   	for(int i = 0; i < s1.size(); i++) {
   		keyboard[s1[i]] = s2[i];
   	}

   	bool convert;

   	for(int i = 0; i < x.size(); i++) {

   		convert = false;

   		if(isalpha(x[i]) && isupper(x[i])) {
   			x[i]+=32;
   			convert = true;
   		}

   		if(keyboard[x[i]]) {
   			x[i] = keyboard[x[i]];
   			if(convert) {
   				x[i]-= 32;
   			}
   		}
   	}

   	cout << x << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}