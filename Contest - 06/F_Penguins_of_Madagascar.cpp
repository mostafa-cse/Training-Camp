#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n, q;
    string s;
    cin >> n >> s >> q;

    vector <int> idx[26];
    for (int i = 0; i < n; i++) {
        idx[s[i] - 'a'].push_back(i);
    }
    while (q--) {
        string str;
        cin >> str;
        int prev = -1;
        bool ok = true;
        for (int i = 0; i < str.size(); i++) {
            if(idx[str[i] - 'a'].empty()){
               ok = false;
               break;
            }
            int ub = upper_bound(idx[str[i] - 'a'].begin(), idx[str[i] - 'a'].end(), prev) - idx[str[i] - 'a'].begin();
            // int lb = lower_bound(idx[str[i] - 'a'].begin(), idx[str[i] - 'a'].end(), preidx + 1) - idx[str[i] - 'a'].begin();
            if (ub == idx[str[i] - 'a'].size()) {
                ok = false;
                break;
            }
            prev = idx[str[i]-'a'][ub];
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}