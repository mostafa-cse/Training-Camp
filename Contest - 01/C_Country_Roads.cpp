#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int tc;
    cin >> tc;

    for (int i = 1; i <= tc; i++) {
        cout << "Case " << i << ":\n";

        int n, m;
        cin >> n >> m;

        list<pair<int, int>> g[n];
        for (int j = 1; j <= m; j++) {
            int u, v, w;
            cin >> u >> v >> w;

            g[u].emplace_back(v, w);
            g[v].emplace_back(u, w);
        }
        int src;
        cin >> src;

        vector<int> dis(n + 1, 1e15);
        priority_queue<pair<int, int>> pq;
        pq.emplace(0, src);
        dis[src] = 0;
        while (!pq.empty()) {
            auto [w1, par] = pq.top();
            pq.pop();

            for (auto [nbr, w2] : g[par]) {
                if (dis[nbr] > max(dis[par] , w2)) {
                    dis[nbr] = max(dis[par], w2);
                    pq.emplace(-dis[nbr], nbr);
                }
            }
        }

        for (int node = 0; node < n; node++) {
            if (dis[node] != 1e15) {
                cout << dis[node] << endl;
            } else {
                cout << "Impossible" << endl;
            }
        }
    }
    return 0;
}