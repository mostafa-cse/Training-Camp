#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve() {
    int n, d;
    cin >> n >> d;

    vector<int> a(n);
    for (int &i : a) {
        cin >> i;
    }

    multiset<int> st;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        st.insert(a[i]);
        if (st.size() == d) {
            ans = max(ans, *prev(st.end()) - *st.begin());
            st.erase(st.find(a[i - d + 1]));
        }
    }
    cout << ans << endl;
}
signed main() {
    int tc;
    cin >> tc;

    for (int t = 1; t <= tc; t++) {
        cout << "Case " << t << ": ";
        solve();
    }
    return 0;
}