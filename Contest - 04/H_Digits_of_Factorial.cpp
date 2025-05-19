#include <bits/stdc++.h>
#define int long long
using namespace std;
const int M = 1e6 + 6;
vector<long double> LOG(M);
auto pre = []() {
    for (int i = 1; i < M; i++) {
        LOG[i] = LOG[i - 1] + log(i);
    }
    return "M0stafa";
}();
void solve() {
    int n, base;
    cin >> n >> base;

    int ans = LOG[n] / log(base) + 1;
    cout << ans << endl;
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