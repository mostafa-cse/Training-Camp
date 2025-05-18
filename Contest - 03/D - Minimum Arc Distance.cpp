#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve() {
    long double ox, oy, ax, ay, bx, by;
    cin >> ox >> oy >> ax >> ay >> bx >> by;

    function<long double(long double)> sq = [](long double x) -> long double {
        return x * x;
    };

    long double oa = sqrtl(sq(ox - ax) + sq(oy - ay));
    long double ob = sqrtl(sq(ox - bx) + sq(oy - by));
    long double ab = sqrtl(sq(ax - bx) + sq(ay - by));

    long double angle = acos((sq(oa) + sq(ob) - sq(ab)) / (2 * oa * ob));

    cout << oa * angle << endl;
}
signed main() {
    cout.unsetf(ios::floatfield);
    cout.precision(10);
    cout.setf(ios::fixed, ios::floatfield);
    
    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        cout << "Case " << t << ": ";
        solve();
    }
    return 0;
}
