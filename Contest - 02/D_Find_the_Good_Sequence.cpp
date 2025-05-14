#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    function<int(int, int )> fun = [&] (int idx, int len) -> int {
        for (int i = idx; i + 1 < idx + len; i++) {
            if (a[i + 1] - a[i] < 2) {
                return false;
            }
        }
        return true;
    };
    int i = 0;
    int ans = 0;
    while (i < n) {
        if (ans < 2) {
            int l = 0, r = n - i;
            while (l <= r) {
                int mid = (l + r) >> 1;
                if (fun(i, mid)) {
                    ans = mid;
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
        } else {
            ans -= 1;
        }
        if (ans == 1) ans = 0;
        cout << ans << endl;
        i++;
    }

    return 0;
}