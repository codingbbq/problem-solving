//
//   Codeforces - A. Night at the Museum
//   https://codeforces.com/problemset/problem/731/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    map<char, int> c = {{'a', 1}, {'b', 2}, {'c', 3}, {'d', 4},
    					{'e', 5}, {'f', 6}, {'g', 7}, {'h', 8},
    					{'i', 9}, {'j', 10}, {'k', 11}, {'l', 12},
    					{'m', 13}, {'n', 14}, {'o', 15}, {'p', 16},
    					{'q', 17}, {'r', 18}, {'s', 19}, {'t', 20},
    					{'u', 21}, {'v', 22}, {'w', 23}, {'x', 24},
    					{'y', 25}, {'z', 26}};

    int x = c['a'];
    int total = 0;
    for(int i = 0; i < s.size(); i++) {

    	total += min(abs(x-c[s[i]]), 26 - abs(x - c[s[i]]));
    	x = c[s[i]];

    }

    cout << total << "\n";

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}