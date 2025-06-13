#include<bits/stdc++.h>
#define int long long
using namespace std;
template<typename T> istream &operator>>(istream &in, vector<T> &v) { for (auto &x: v) in >> x; return in; }
int32_t main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    cin >> a >> b;

    int ans = 0;
    int age = 0, pore = min(1ll, m - 1);
    for (int i = 0; i < n; i++) {
        while (pore + 1 < m and a[i] > b[pore]) pore++;
        while (age + 1 < m and a[i] > b[age + 1]) age++;
        ans = max(ans, min(abs(a[i] - b[age]), abs(b[pore] - a[i])));
    }
    cout << ans;
    return 0;
}