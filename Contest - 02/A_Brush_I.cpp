void Solve () {
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x < 0) continue;

        sum += x;
    }
    cout << sum;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int tc = 1;
    cin >> tc;

    for (int i = 1; i <= tc; i++) {
        if (i - 1) {
            cout << '\n';
        }
        cout << "Case " << i << ": ";
        Solve();
    }
    return 0;
}
C++
