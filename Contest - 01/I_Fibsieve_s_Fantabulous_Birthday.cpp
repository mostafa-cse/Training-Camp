#include <bits/stdc++.h>
#define int long long
using namespace std;
const int M = 5e6;
int a[M + 6];
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++) {
        cout << "Case " << i << ": ";
        int n;
        cin >> n;
    
        if (n == 1) {
            cout << 1 << " " << 1;
        } else {
            int row_col = sqrtl(n);
            if (row_col * row_col == n) {
                if (row_col & 1) {
                    cout << 1 << " " << row_col;
                } else {
                    cout << row_col << " " << 1;
                }
            } else {
                int ns = row_col + 1;
                int first = row_col * row_col + 1;
                int dif = abs(n - first + 1);
                if (ns & 1) {
                    if (dif > ns) {
                        cout << ns * 2 - dif << " " << ns;
                    } else {
                        cout << ns << " " << dif;
                    }
                } else {
                    if (dif > ns) {
                        cout << ns << " " << ns * 2 - dif;
                    } else {
                        cout << dif << " " << ns;
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}