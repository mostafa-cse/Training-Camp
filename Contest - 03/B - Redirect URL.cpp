#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve() {
    string s;
    cin >> s;
    int pos = s.rend() - find(s.rbegin(), s.rend(), '/');
    cout << "https://" << s.substr(pos) << endl;
}
signed main() {
    int tc;
    cin >> tc;

    for (int t = 1; t <= tc; t++) {
        cout << "Case " << t << ": ";
        solve();
    }
    return 0;
}
