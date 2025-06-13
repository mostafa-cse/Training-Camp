#include<bits/stdc++.h>
#define int long long
using namespace std;
#define all(x) x.begin(), x.end()
template<typename T> istream &operator>>(istream &in, vector<T> &v) { for (auto &x: v) in >> x; return in; }
int32_t main() {
    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    cin >> a;
    sort(all(a));

    vector<int> left(n, 0);
    for (int i = 0, j = 0; i < n; i++) {
        while (j < n and a[i] - a[j] > k) j++;
        left[i] = i - j + 1;
        if (i) left[i] = max(left[i], left[i - 1]);
    }
    vector<int> right(n + 1, 0);
    for (int i = n - 1, j = n - 1; i >= 0; i--) {
        while (j >= i and a[j] - a[i] > k) j--;
        right[i] = j - i + 1;
        if (i + 1 < n) right[i] = max(right[i], right[i + 1]);
    }

    int ans = 0;
    for (int i = 0 ; i + 1 < n; i++) {
        ans = max(ans, left[i] + right[i + 1]);
    }
    cout << ans;
    return 0;
}