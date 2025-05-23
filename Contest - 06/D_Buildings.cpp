#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int &i : a) {
        cin >> i;
    }
    
    function<bool(int)> fun = [&](int height) -> bool {
        int cost = 0;
        for (int i : a) {
            cost += max(height - i, 0ll);
            if (cost > k) {
                return false;
            }
        }
        return true;
    };

    int l = *min_element(a.begin(), a.end()), r = 1e12, ans = *min_element(a.begin(), a.end());
    while (l <= r) {
        int mid = (l + r) >> 1;
        if (fun(mid)) {
            l = mid + 1;
            ans = mid;
        } else {
            r = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}