//
//   Codeforces - A. Bear and Five Cards
//   https://codeforces.com/problemset/problem/680/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t1, t2, t3, t4, t5;
    cin >> t1 >> t2 >> t3 >> t4 >> t5;

    int sum = 0;
    sum = t1 + t2 + t3 + t4 + t5;

    map<int, int> cards;

    cards[t1]++;
    cards[t2]++;
    cards[t3]++;
    cards[t4]++;
    cards[t5]++;


    int total = 0;
    for(auto const &c : cards) {
    	if(c.second > 1) {
    		total = max(total, c.first * (c.second > 3 ? 3 : c.second));
    	}
    }

   
    cout << sum - total;


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}