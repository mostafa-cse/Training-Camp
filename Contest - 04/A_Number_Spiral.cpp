#include<bits/stdc++.h>
#define int long long
using namespace std;
void Solve() {
    int row, col;
    cin >> row >> col;

    int ans = 1;
    if (row > col) {
       int sign = ~row & 1 ? -1 : 1;
       int First = (row >> 1 << 1) * (row >> 1 << 1);
       if (row & 1) {
            First += 1;
       }
       ans = First + (col - 1) * sign;
    } else {
        int sign = col & 1 ? -1 : 1;
        int First = col * col;
        if (~col & 1) {
            First = (col - 1) * (col - 1) + 1;
        }
        ans = First + (row - 1) * sign;
    }
    cout << ans;
}
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        if (i) {
            cout << endl;
        }
        // cout << "Case " << i + 1 << ": ";
        Solve();
    }
    return 0;
}
