#include<bits/stdc++.h>
#define int long long
using namespace std;
#define all(x) x.begin(), x.end()
template<typename T> istream &operator>>(istream &in, vector<T> &v) { for (auto &x: v) in >> x; return in; }
int32_t main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    cin >> a;

    vector<pair<int, int>> ans;
    map<int, int> store;
    int start = 0;
    for (int i = 0; i < n; i++) {
        if (store.size() == k) {
            ans.push_back({start, i - 1});
        }
        store[a[i]]++;
        while (store.size() > k) {
            store[a[start]]--;
            if (store[a[start]] == 0) store.erase(a[start]);
            start++;
        }
    }
    ans.push_back({start, n - 1});
    sort(all(ans), [](pair<int, int> &x, pair<int, int> &y)
         { return x.second - x.first > y.second - y.first; });
    cout << ans[0].first + 1 << ' ' << ans[0].second + 1;
    return 0;
}