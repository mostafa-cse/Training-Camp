#include<bits/stdc++.h>
#define int long long
using namespace std;
#define all(x) x.begin(), x.end()
template<typename T> istream &operator>>(istream &in, vector<T> &v) { for (auto &x: v) in >> x; return in; }
int32_t main() {
    freopen("herding.in", "r", stdin);
    freopen("herding.out", "w", stdout);
    int n;
    cin >> n;

    vector<int> a(n);
    cin >> a;
    sort(all(a));

    int mn = 1e18;
    if (a[n - 1] - a[1] == n - 2 and a[1] - a[0] > 2) {
        mn = 2;
    } else if (a[n - 2] - a[0] == n - 2 and a[n - 1] - a[n - 2] > 2) {
        mn = 2;
    } else {
        int mx_consecutive = 1;
        for (int i = 0, j = 0; i < n; i++) {
            while (j + 1 < n and a[j + 1] - a[i] <= n - 1) j++;
            mx_consecutive = max(mx_consecutive, j - i + 1);
        }
        mn = n - mx_consecutive;
    }
    int mx = max(a[n - 1] - a[1], a[n - 2] - a[0]) - (n - 2);
    cout << mn << "\n" << mx << endl;
    return 0;
}