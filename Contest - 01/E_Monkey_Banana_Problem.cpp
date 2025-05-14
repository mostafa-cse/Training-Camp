#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int tc;
    cin >> tc;

    for (int c = 1; c <= tc; c++){
        cout << "Case " << c << ": ";
        int n;
        cin >> n;
    
        vector<vector<int>> a(2 * n, vector<int>(n + 1, 0));
        int cnt = 1;
        for (int i = 1; i <= 2 * n - 1; i++) {
            for (int j = 1; j <= cnt; j++) {
                cin >> a[i][j];
            }
            if (i < n) cnt++;
            else cnt--;
        }
    
        for (int i = 1; i <= 2 * n - 1; i++) {
            for (int j = 1; j <= n; j++) {
                int mx = a[i - 1][j];
                if (i <= n) {
                    mx = max(mx, a[i - 1][j - 1]);
                } else {
                    if (j + 1 <= n)
                        mx = max(mx, a[i - 1][j + 1]);
                }
                a[i][j] += mx;
            }
        }
        cout << a[2 * n - 1][1] << endl;
    }
    return 0;
}