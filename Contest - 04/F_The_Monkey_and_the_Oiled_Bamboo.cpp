#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &i : a) {
        cin >> i;
    }

    function<bool(int)> check = [&](int x) -> bool {  
        for (int i = 1; i < n; i++) {
            if (a[i] - a[i - 1] > x) {
                return false;
            }
            x -= (a[i] - a[i - 1] == x);
        }
        return true;
    };

    int l = a[0], r = 1e15, ans = 1;
    while (l <= r) {
        int mid = l + r >> 1;

        if (check(mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
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