#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MAXN = 1e6 + 123;
bool is_prime[MAXN];
vector<int> p;
auto prime_sieve = []() {
    for (int i = 3; i < MAXN; i += 2) {
        is_prime[i] = true;
    }
    is_prime[2] = true;
    for (int i = 3; i < MAXN; i += 2) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAXN; j += i) {
                is_prime[j] = false;
            }
        }
        if (i * i > MAXN) {
            break;
        }
    }
    for (int i = 2; i < MAXN; i++) {
        if (is_prime[i]) {
            p.push_back(i);
        }
    }
    return 0;
}();
int divisor(int n) {
    int divisor = 1ll;
    for (int i : p) {
        if (i * i > n) break;
        int cnt = 0;
        while (n % i == 0) {
            cnt++;
            n /= i;
        }
        divisor *= (cnt + 1);
    }
    if (n != 1) {
        divisor *= 2ll;
    }
    return divisor;
}
void solve() {
    int a, k;
    cin >> a >> k;
    
    if (k * k == a or (int)sqrtl(a) < k) {
        cout << 0 << endl;
        return;
            
    }

    int d = divisor(a) >> 1; // pair
    for (int i = 1l; i < k; i++) {
        if (a % i == 0) {
            d -= 1;
        }
    }
    cout << d << endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int tc;
    cin >> tc;

    for (int t = 1; t <= tc; t++) {
        cout << "Case " << t << ": ";
        solve();
    }
    return 0;
}