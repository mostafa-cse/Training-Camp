#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    struct Bin {
        int B, G, C;
        Bin() : B(0), G(0), C(0) {}
        Bin(int b, int g, int c) : B(b), G(g), C(c) {}
    };

    for (int a, b, c, d, e, f, g, h, i; cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;) {
        int brown = 0, green = 0, clear = 0;
        vector<Bin> ar(3);
        ar[0] = Bin(a, b, c);
        ar[1] = Bin(d, e, f);
        ar[2] = Bin(g, h, i);

        for (int j = 0; j < 3; j++) {
            brown += ar[j].B;
            green += ar[j].G;
            clear += ar[j].C;
        }

        string com = "BCG";
        string ans = "ZZZ";
        int change = LLONG_MAX;

        do {
            int cost = 0;
            for (int j = 0; j < 3; j++) {
                if (com[j] == 'B') cost += (brown - ar[j].B);
                else if (com[j] == 'G') cost += (green - ar[j].G);
                else cost += (clear - ar[j].C);
            }
            if (cost < change or (cost == change && com < ans)) {
                change = cost;
                ans = com;
            }
        } while (next_permutation(com.begin(), com.end()));

        cout << ans << " " << change << endl;
    }

    return 0;
}
