#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n, T;
    cin >> n >> T;

    vector<int> a(n);
    for (int &i : a) {
        cin >> i;
    }

    int ans = 0;
    for (int r = 0, l = 0, sum = 0; l < n; l++) {
        while (r < n and sum + a[r] <= T) {
            sum += a[r];
            r++;
        }
        // cout << l << " " << r << ": " << sum << endl;
        ans = max(ans, r - l);
        sum -= a[l];
    }
    cout << ans;
    return 0;
}