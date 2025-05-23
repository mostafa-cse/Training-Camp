#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve() {
    string s;
    cin >> s;

    string Nepal = "nepal";
    // transform(s.begin(), s.end(), s.begin(), ::tolower);

    int ans = 1;
    for (int i = 0; i < 5; i++) {
        ans &= (count(s.begin(), s.end(), Nepal[i]) != 0);
    }

    if (ans) {
        cout << "Maile Nepal banauna sakchhu!!" << endl;
    } else {
        cout << "Hami sabai milera Nepal Banau hai!!" << endl;
    }
}
signed main() {
    int tc;
    cin >> tc;

    for (int t = 1; t <= tc; t++) {
        // cout << "Case " << t << ": ";
        solve();
    }
    return 0;
}