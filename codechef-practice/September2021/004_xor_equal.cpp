//
//   CodeChef - XOR Equal | Problem Code: PALINT
//   https://www.codechef.com/SEPT21C/problems/PALINT
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long t;
    cin >> t;

    while(t--) {
    	long long n, x;
    	cin >> n >> x;

    	map<long long, long long> freq;

    	for(int i = 0; i < n; i++) {
    		int a;
    		cin >> a;
    		freq[a]++;
    	}

    	long long m = 0;
    	long long op = 0;
    	for(auto const &f : freq) {
    		// cout << f.first << " : " << f.second << "\n";
    		m = max(m, f.second);
    		long long temp = f.first^x;
    		// cout << "temp : " << temp << "\n";
    		if(freq[temp]) {
    			// cout << f.first << " : temp" << temp << " : freq[temp]" << freq[temp] << "\n";
    			long long mTemp = f.second + freq[temp]; // Total count
    			long long opTemp = f.second; // Operations

    			// cout << "mTemp : " << mTemp << " : opTemp " << opTemp << "\n";
    			if(mTemp >= m && (opTemp <= op || op == 0)) {
    				m = mTemp;
    				op = opTemp;
    			}

    		}
    	}

    	cout << m << " " << op << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}