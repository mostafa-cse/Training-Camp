#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    freopen("pairup.in", "r", stdin);
    freopen("pairup.out", "w", stdout);
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (auto &[f, s] : a) {
        cin >> f >> s;
    }
    sort(a.begin(), a.end(), [&](pair<int, int> &x, pair<int, int>&y){
        return x.second < y.second;
    });

    int ans = 0;
    int l = 0, r = n - 1;
    while (l < r) {
        int curMn = min(a[l].first, a[r].first);
        ans = max(ans, a[l].second + a[r].second);
        
        a[l].first -= curMn;
        a[r].first -= curMn;
        
        l += !a[l].first;
        r -= !a[r].first;
    }
    cout << ans << endl;
    return 0;
}