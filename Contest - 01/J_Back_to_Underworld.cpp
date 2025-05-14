#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
vector<int> adj[20001];
int a, b;
void dfs(int node,vector<int> &vis, int clr) {
    a += clr;
    b += !clr;
    vis[node] = 1;
    for (int nbr : adj[node]) {
        if (vis[nbr] == 0) {
            dfs(nbr, vis, clr ^ 1);
        }
    }
}
void Solve() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> vis(20001, 0);
    int ans = 0;
    for (int i = 1; i <= 20000; i++)  {
        if (vis[i] == 0 and !adj[i].empty()) {
            a = 0, b = 0;
            dfs(i, vis, 0);
            ans += max(a, b);
        }
    }
    cout << ans;
}
int32_t main() {
    int tc;
    cin >> tc;

    for (int i = 1; i <= tc; i++) {
        if (i != 1) {
            cout << endl;
        }
        cout << "Case "<< i << ": ";
        Solve();
        for(int i = 0; i <= 20000; i++) {
            adj[i].clear();
        }
    }
    return 0;
}