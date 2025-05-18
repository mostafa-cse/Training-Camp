#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n;
    cin >> n;

    int ans = n;
    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;
        ans ^= x;
        
        ans ^= i;
    }
    cout << ans;
    return 0;
}
