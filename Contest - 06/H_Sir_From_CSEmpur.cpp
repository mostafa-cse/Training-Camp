#include <bits/stdc++.h>
#define int long long
using namespace std;
#ifndef ONLINE_JUDGE
#define dout(...) cerr << "Line:" << __LINE__ << " [" << #__VA_ARGS__ << "] = ["; _print(__VA_ARGS__)
#else
#define dout(...)
#endif
void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }   
    if(set<int>(a.begin() + 1, a.end()).size() < k) {
        cout << -1 << endl;
        return;
    }

    map<int, int> cnt;
    int ansl = 1, ansr = n;
    for (int l = 1, r = 1; l <= n; l++) {
        while (r <= n and cnt.size() < k) {
            cnt[a[r++]]++;
        }
        if (cnt.size() == k) {
            int ans_len = ansr - ansl + 1;
            int cur_len = r - l;
            if (ans_len > cur_len) {
                ansl = l;
                ansr = r - 1;
            }
        }
        cnt[a[l]]--;
        if (cnt[a[l]] == 0) {
            cnt.erase(a[l]);
        }
    }
    cout << ansl << " " << ansr << endl;
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