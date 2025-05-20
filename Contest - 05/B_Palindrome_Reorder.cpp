#include<bits/stdc++.h>
#define int long long
using namespace std;
#define all(x) x.begin(), x.end()
string cdn[2] = {"YES", "NO"};
#ifndef ONLINE_JUDGE
#define dout(...) cerr << "Line:" << __LINE__ << " [" << #__VA_ARGS__ << "] = ["; _print(__VA_ARGS__)
#else
#define dout(...)
#endif
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);
    string s;
    cin >> s;

    map<char ,int> cnt;
    for (char &c : s) {
        cnt[c]++;
    }

    int p = 0;
    string left = "", right = "";
    char odd = '1';
    for (auto &[ch, n] : cnt) {
        p += (n & 1);
        if (p > 1) {
            return cout << "NO SOLUTION", 0;
        }
        while (n > 1) {
            left.push_back(ch);
            right.push_back(ch);
            n -= 2;
        }
        if (n == 1) {
            odd = ch;
        }
    }
    if (odd != '1') {
        left.push_back(odd);
    }

    reverse(all(right));
    cout << left << right;
    return 0;
}
