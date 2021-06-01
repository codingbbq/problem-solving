//
//   Codeforces - A. Amusing Joke
//   https://codeforces.com/problemset/problem/141/A
//
// Notes : I use a map to keep track of the characters and its frequency of occurrence.
// Thus I ran for loop on all the three strings followed by a loop to check on the frequency, so total 4 loops.

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string name;
    cin >> name;
    string host;
    cin >> host;
    string p;
    cin >> p;

    map<char, int> freq;
    map<char, int> checkFreq;

    // Check for length
    if(name.size() + host.size() != p.size()) {
        cout << "NO" << "\n";
        return;
    } else {

        // maintain a map with count for each character
        for(int i = 0; i < name.size(); i++) {
            if(freq[name[i]]) {
                freq[name[i]] += 1;
            } else {
                freq[name[i]] = 1;
            }
        }

        for(int j = 0; j < host.size(); j++) {
            if(freq[host[j]]) {
                freq[host[j]] += 1;
            } else {
                freq[host[j]] = 1;
            }
        }

        for(int k = 0; k < p.size(); k++) {
            if(checkFreq[p[k]]) {
                checkFreq[p[k]] += 1;
            } else {
                checkFreq[p[k]] = 1;
            }
        }

        // Check if freq and checkFreq have same characters
        for(int f = 0; f < p.size(); f++) {
            if(checkFreq[p[f]] != freq[p[f]]) {
                cout << "NO" << "\n";
                return;
            }
        }

        cout << "YES" << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}