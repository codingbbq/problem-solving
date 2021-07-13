//
//   Codeforces - C. Two Brackets
//   https://codeforces.com/problemset/problem/1452/C
//


// The idea is to remove all the instances of curves and brackets that are in pairs.
// We can use two different stacks, one for '()' and other for '[]'

// Character comparions needs to be done using single quotes
// First check if the stack is not empty and only then check if stack.top() has your 
// desired element. 

// Below code can be still optimized by removing the check for the top element
// Since I am only pushing the '(' and '[' these characters, I can only check for
// the empty stack before I pop and increase the count.

#include <bits/stdc++.h>
using namespace std;

void solve() {
	
    int t;
    cin >> t;
    while(t--) {

    	string s;
    	cin >> s;
    	
    	stack<char> brackets; // [ ]
    	stack<char> curves; // ( )

    	int total = 0;
    	for(int i = 0; i < s.size(); i++) {

    		// Check for curves
    		if(s[i] == '(') {
    			curves.push('(');
    		}


    		if(s[i] == ')') {

    			if(!curves.empty()) {

	    			if(curves.top() == '(') {
	    				curves.pop();
	    				total++;
	    			}

    			}
    			
    		}

    		// Check for brackets
    		if(s[i] == '[') {
    			brackets.push('[');
    		}

    		if(s[i] == ']') {

    			if(!brackets.empty()) {

	    			if(brackets.top() == '[') {
	    				brackets.pop();
	    				total++;	
	    			}

    			}
    			
    		}

    	}

    	cout << total << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}