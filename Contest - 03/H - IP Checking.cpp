#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve() {
    string dec;
    cin >> dec;

    string bin;
    cin >> bin;

    function<vector<int>(string, bool)> split = [](string s, bool convert = false) -> vector<int> {
        istringstream ss(s);
        vector<int> a;
        for(int i = 0; i < 4; i++){
            string part;
            getline(ss, part, '.');
            if (convert) a.push_back(stoi(part, 0, 2));
            else a.push_back(stoi(part));
        }
        return a;
    };
    cout << (split(dec, false) == split(bin, true) ? "Yes" : "No") << endl;
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
