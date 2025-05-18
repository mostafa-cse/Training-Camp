#include <bits/stdc++.h>
using namespace std;
void Solve() {
    int n, q;
    cin >> n >> q;
    
    vector<int> a(n);
    for (int &i : a) {
        cin >> i;
    }

    while (q--) {
        char c;
        cin >> c;

        if (c == 'S') {
            int k;
            cin >> k;
            for (int &i : a) {
                i += k;
            }
        } else if (c == 'M') {
            int k;
            cin >> k;
            for (int &i : a) {
                i *= k;
            }
        } else if (c == 'D') {
            int k;
            cin >> k;
            for (int &i : a) {
                i /= k;
            }
        } else if (c == 'P') {
            int l, r;
            cin >> l >> r;
            swap(a[l], a[r]);
        } else {
            reverse(a.begin(), a.end());
        }
    }

    for (int i : a) {
        cout << i << " ";
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        if (i - 1) cout << endl;
        cout << "Case " << i << ":\n";
        Solve();
    }
    return 0;
}
