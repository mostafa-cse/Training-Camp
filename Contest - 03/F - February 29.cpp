#include <bits/stdc++.h>
#define int long long
using namespace std;
char coma;
void solve() {
    string month_birth;
    int date_birth, year_birth;
    cin >> month_birth >> date_birth >> coma >> year_birth;

    string cur_month;
    int date_cur, year_cur;
    cin >> cur_month >> date_cur >> coma >> year_cur;

    if (month_birth != "January" and month_birth != "February")  year_birth++;
    
    if (cur_month == "January" or cur_month == "February" and date_cur < 29) year_cur--;

    if (year_birth > year_cur) {
        cout << 0 << endl;
    } else {
        function<int(int)> lyear = [](int Y) -> int {
            return Y / 4 - Y / 100 + Y / 400;
        };
        cout << lyear(year_cur) - lyear(year_birth - 1) << endl;
    }
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
