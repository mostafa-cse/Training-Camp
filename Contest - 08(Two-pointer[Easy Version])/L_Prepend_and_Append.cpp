#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    string str;
    cin >> str;
    
    int l = 0, r = n - 1;
    while (l < r and str[l] != str[r]){
        l++;
        r--;
    }
    cout << r - l + 1 << endl;
}
int32_t main() {
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solve();
    }
    return 0;
}