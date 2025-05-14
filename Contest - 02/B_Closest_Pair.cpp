signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout.unsetf(ios::floatfield);
    cout.precision(10);
    cout.setf(ios::fixed, ios::floatfield);
    int n;
    cin >> n;

    vector<pair<double, double>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }

    long double ans = 1e18;
    for (int i = 0; i < n; i++) {
        function<long double(long double)> sq =[](long double x) -> long double {
            return x * x;
        };
        for (int j = i + 1; j < n; j++) {
            long double dis = sqrtl(sq(abs(a[i].first - a[j].first)) + sq(abs(a[i].second - a[j].second)));
            smin(ans, dis);
        }
    }
    cout << ans;
    return 0;
}