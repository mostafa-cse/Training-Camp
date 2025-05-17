#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve() {
    int n, k;
    cin >> n >> k;
    if (k > n) {
        cout << 0 << endl;
        return;
    }
    __int128_t ans = 1;
    for (int i = 0; i < k; i++) {
        ans *= (n - i);
        ans *= (n - i);
        ans /= (i + 1);
    }
    int res = ans;
    cout << res << endl;
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
