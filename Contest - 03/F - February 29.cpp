#include <bits/stdc++.h>
#define int long long
using namespace std;
char coma;
int Month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string Month_Name[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
map<string, int> getMonth;
int check(int n) {
    if (n % 400 == 0) return true;
    if (n % 100 == 0) return false;
    if (n % 4 == 0) return true;
    return false;
}
void solve() {
    string month_birth;
    int date_birth, year_birth;
    cin >> month_birth >> date_birth >> coma >> year_birth;

    string cur_month;
    int date_cur, year_cur;
    cin >> cur_month >> date_cur >> coma >> year_cur;

    if (getMonth[month_birth] > 2)  year_birth++;
    while (!check(year_birth)) year_birth++;
    
    if (getMonth[cur_month] == 1 or getMonth[cur_month] == 2 and date_cur < 29) year_cur--;
    while(!check(year_cur)) year_cur--;

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
    for (int i = 1; i <= 12; i++) {
        getMonth[Month_Name[i]] = i;
    }
    int tc;
    cin >> tc;

    for (int t = 1; t <= tc; t++) {
        cout << "Case " << t << ": ";
        solve();
    }
    return 0;
}
