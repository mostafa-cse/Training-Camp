#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve() {
    int n;
    cin >> n;

    map<string, vector<string>> adj;
    map<string, int> vis;
    set<string> drinks;
    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        drinks.insert(a);
        drinks.insert(b);
        vis[a] = vis[b] = 0;
        adj[a].push_back(b);
    }

    function<bool(string &)> dfs = [&](string &node) -> bool{
        vis[node] = 1;
        bool ans = 0;
        for (string &nbr : adj[node]) {
            if (vis[nbr] == 0) {
                ans |= dfs(nbr);
            } else if (vis[nbr] == 1) {
                return true;
            }
        }
        vis[node] = 2;
        return ans;
    };

    bool cycle = 0;
    
    for (auto d : drinks) {
        if (vis[d] == 0) {
            cycle |= dfs(d);
        }
    }

    cout << (cycle ? "No" : "Yes") << endl;
}
signed main() {
    int tc;
    cin >> tc;

    for (int t = 1; t <= tc; t++) {
        cout << "Case " << t << ": ";
        solve();
    }
    return 0;
}
