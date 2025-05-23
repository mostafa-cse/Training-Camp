#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve() {
    int n, q;
    cin >> n >> q;
    vector<pair<int, int>> v;
    for (int i = 0; i < q; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == 1) {
            v.push_back({b, +d});
            v.push_back({c + 1, -d});
        } else {
            v.push_back({b, -d});
            v.push_back({c + 1, +d});
        }
    }

    sort(v.begin(), v.end());
    function<bool(int)> solve = [&](int s) -> bool {
        int health = 0;
        for (int i = 0; i < v.size(); i++) {
            if (i == 0) {
                health += v[i].second;
            } else {
                s += health * (v[i].first - v[i - 1].first);
                health += v[i].second;
            }
            if (s <= 0) return false;
        }
        return true;
    };

    int l = 1, r = 4e18 + 5, ans = 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (solve(mid)) {
            r = mid - 1;
            ans = mid;
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
        // cout << "Case " << t << ": ";
        solve();
    }
    return 0;
}