#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &i : a) {
        cin >> i;
    }

    int ans = 1e18;
    for (int mask = 1; mask < (1 << n); ++mask) {
        int take = 0, give = 0;
        for (int b = 0; b < n; ++b) {
            if((mask >> b) & 1) {
                take += a[b];
            } else {
                give += a[b];
            }
        }
        ans = min(ans, abs(take - give));
    }
    cout << ans;
    return 0;
}
