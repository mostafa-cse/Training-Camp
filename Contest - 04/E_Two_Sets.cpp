#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
 
    if ((n * (n + 1)) % 4) {
        return cout << "NO", 0;
    }
    
    int Sum = n * (n + 1) / 4;
    set<int> a, b;
    for (auto i = 1; i <= n; i++) {
        a.insert(i);
    }
 
    while (Sum > 0) {
        auto val = a.lower_bound(Sum);
        if (val != a.end()) {
            b.insert(*val);
            a.erase(*val);
            Sum = 0;
        } else {
            a.erase(n);
            b.insert(n);
        }
        Sum -= n;
        n -= 1;
    }
    
    if (a.size() < b.size()) {
        swap(a, b);
    }
    
    cout << "YES\n";
    cout << a.size() << endl;
    for (auto el: a) cout << el << " ";
    cout << endl;
 
    cout << b.size() << endl;
    for (auto el : b) cout << el << " ";
    cout << endl;
    return 0;
}