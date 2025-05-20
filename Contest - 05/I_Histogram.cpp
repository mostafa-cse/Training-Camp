#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve() {
    int n;
    cin >> n;

    vector<int> H(n);
    for (int &i : H) {
        cin >> i;
    }
    H.push_back(0);

    stack<int> st;
    int ans = 0;

    // Using Monotonic Stack(increasing)
    for (int i = 0; i < (int)H.size(); ++i) {
        while (!st.empty() && H[i] < H[st.top()]) {
            int height = H[st.top()];
            st.pop();
            int width  = st.empty() ? i : i - st.top() - 1;
            ans = max(ans, height * width);
        }
        st.push(i);
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