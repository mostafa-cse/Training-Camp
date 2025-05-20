#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main() {
    string s;
    cin >> s;

    set<string> ans;
    ans.insert(s);

    string tem = s;
    do {
        next_permutation(s.begin(), s.end());
        ans.insert(s);
    } while (s != tem);

    cout << ans.size() << endl;
    for (auto x : ans){
        cout << x << endl;
    }
    return 0;
}
