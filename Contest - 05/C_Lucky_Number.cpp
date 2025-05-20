#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int ans[100005];
signed main() {
    ordered_set st;
    st.insert(0);

    for (int i = 1; i < 1429451; i += 2) {
        st.insert(i);
    }

    ans[1] = 1;
    for (int i = 2; i < 100005 and i < st.size(); i++) {
        int x = *(st.find_by_order(i));
        vector <int> v;
        for (int j = x; j < 1429451 and j < st.size(); j += x) {
            v.push_back(*st.find_by_order(j));
        }
        for (int y : v) {
            st.erase(y);
        }
        ans[i] = x;
    }

    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        int n;
        cin >> n;
        cout << "Case " << i << ": " << ans[n] << endl;
    }
    return 0;
}