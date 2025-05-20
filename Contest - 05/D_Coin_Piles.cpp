#include<bits/stdc++.h>
#define int long long
using namespace std;
void Solve() {
    int a, b;
    cin >> a >> b;

    if ((a + b) % 3 == 0) {
        if (abs(a - b) > min(a, b)) {
            cout << "NO";
        } else {
            cout << "YES";
        }
    } else {
        cout << "NO";
    }
}
int32_t main() {
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
