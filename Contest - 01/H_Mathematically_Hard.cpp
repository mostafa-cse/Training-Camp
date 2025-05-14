#include <bits/stdc++.h>
#define int unsigned long long
using namespace std;
const int M = 5e6;
int a[M + 6];
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    for (int i = 2; i <= M; i++) {
        a[i] = i;
    }
    for (int i = 2; i <= M; i++) {
        if (a[i] == i) {
            for (int j = i; j <= M; j += i) {
                a[j] -= (a[j] / i);
            }
        }
    }
    for (int i = 2; i <= M; i++) {
        a[i] = a[i] * a[i] + a[i - 1];
    }
    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++) {
        cout << "Case " << i << ": ";
        int l, r;
        cin >> l >> r;
        cout << a[r] - a[l - 1] << endl;
    }
    return 0;
}