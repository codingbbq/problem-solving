// https://codeforces.com/problemset/problem/59/A
#include <bits/stdc++.h>
using namespace std;
string convertString(string word, int t) {
    if(t == 1) {
        for(int i = 0; i < word.length(); i++) {
            word[i] = toupper(word[i]);
        }
    } else {
        for(int i = 0; i < word.length(); i++) {
            word[i] = tolower(word[i]);
        }
    }
    return word;    
}

string processString(string word) {
    int upper = 0, lower = 0;
    for(int i = 0; i < word.length(); ++i) {
        if(isupper(word[i])) {
            upper++;
        }else{
            lower++;
        }
    }
    if(upper > lower) {
        return convertString(word, 1);
    }else {
        return convertString(word, 2);
    }
}

void solve() {
    string word;
    cin>>word;

    cout<<processString(word);
    
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("../../input-output/input.txt", "r", stdin);
        freopen("../../input-output/output.txt", "w", stdout);
    #endif

    solve();
    return 0;

}