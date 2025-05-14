#include<bits/stdc++.h>
#define int long long
using namespace std;
int a, b, c, d, e, f;
vector<int> dp;
int fn(int n) {
    if (n < 0) return 0;
    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    if (n == 3) return d;
    if (n == 4) return e;
    if (n == 5) return f;
    if (dp[n] != -1) {
        return dp[n];
    }
    int ans = 0;
    for (int i = 1; i <= 6; i++) {
        ans += fn(n - i);
        ans %= 10000007;
    }
    return dp[n] = ans;
}
int32_t main() {
    int n, cases;
    scanf("%lld", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno) {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        dp.assign(n + 5, -1);
        printf("Case %lld: %lld\n", caseno, fn(n) % 10000007);
    }
    return 0;
}