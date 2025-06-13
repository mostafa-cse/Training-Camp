#include<bits/stdc++.h>
#define int long long
using namespace std;
/**
 * Time : 3e+08
 */
int32_t main() {
    int n, q;
    string s;
    cin >> n >> s >> q;
    while (q--) {
        int mx;
        char clr;
        cin >> mx >> clr;

        int ans = mx;
        for (int r = 0, l = 0; r < n; r++) {
            mx -= s[r] != clr;
            ans = max(ans, r - l + (int)(mx >= 0));
            while (l < n and mx < 0) {
                mx += s[l] != clr;
                l++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}