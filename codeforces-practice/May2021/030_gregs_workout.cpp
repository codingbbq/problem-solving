//
//   Codeforces - A. Greg's Workout
//   https://codeforces.com/problemset/problem/255/A
//

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n], chest(0), biceps(0), back(0);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(i%3 == 0) {
            chest+=a[i];
        }
        if(i%3 == 1) {
            biceps+=a[i];
        }
        if(i%3 == 2) {
            back+=a[i];
        }
    }
    if(max(chest,(max(biceps,back)))==chest)
        cout<<"chest"<<endl;
    else if(max(chest,(max(biceps,back)))==biceps)
        cout<<"biceps"<<endl;
    else if(max(chest,(max(biceps,back)))==back)
        cout<<"back"<<endl;
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