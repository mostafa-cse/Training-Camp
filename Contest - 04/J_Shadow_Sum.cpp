#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &i : v) {
        cin >> i;
    }

    set<int> s;
    for (int i = n - 1; i >= 0; i--) {
        if (s.count(v[i]) == 0 and s.count(-v[i]) == 0) {
            s.insert(v[i]);
        }
    }
    cout << accumulate(s.begin(), s.end(), 0ll) << endl;
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