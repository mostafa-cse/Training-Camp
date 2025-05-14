void Solve () {
    int P, L;
    cin >> P >> L;

    int tot = P - L;
    set<int> ans;
    for (int i = 1; i * i <= tot; i++) {
        if (tot % i == 0) {
            if (P % i == L) ans.insert(i);
            if (P % (tot / i) == L) ans.insert(tot / i);
        }
    }
    if (ans.empty()) {
        cout << "impossible";
        return;
    }
    for (auto el : ans) {
        cout << el << " ";
    }
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++) {
        cout << "Case " << i << ": ";
        Solve();
        cout << endl;
    }
    return 0;
}