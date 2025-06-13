#include<bits/stdc++.h>
#define int long long
using namespace std;
#define all(x) x.begin(), x.end()
const int M = 1e5 + 1;
vector<int> factors[M];
auto setIO = []() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);  cout.tie(0);
    for (int i = 1; i < M; i++)
        for (int j = i; j < M; j += i)
            factors[j].push_back(i);
    return 0;
}();
void Solve() {
    int student, topic;
    cin >> student >> topic;

    vector<int> skill(student);
    for (int i = 0 ; i < student; ++i) {
        cin >> skill[i];
    }
    sort(all(skill));

    int ans = 1e18;
    map<int, int> cnt;
    int proficient = 0;
    for (int i = 0, first = 0; i < student; i++) {
        for (int val : factors[skill[i]]) {
            if (val <= topic) cnt[val]++;
            if(val <= topic and cnt[val] == 1) proficient++;
        }
        while(proficient == topic) {
            ans = min(skill[i] - skill[first], ans); // bug : Not length
            for (int val : factors[skill[first]]) {
                cnt[val]--;
                if (val <= topic and cnt[val] == 0) proficient--;
            }
            first++;
        }
    }
    if (ans == 1e18) ans = -1;
    cout << ans;
}
int32_t main() {
    int tc;
    cin >> tc;

    for (int i = 1; i <= tc; i++) {
        if (i != 1) {
            cout << endl;
        }
        // cerr << "Case " << i << ": \n";
        Solve();
    }
    return 0;
}