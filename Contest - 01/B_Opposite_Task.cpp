#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int tc;
    cin >> tc;

    for (int i = 1; i <= tc; i++){
        int n;
        cin >> n;
        if (n == 20) {
            cout << 10 << " " << 10 << endl; 
        } else {
            cout << n % 10 << " " << (n - (n % 10)) << endl;
        }
    }
    return 0;
}