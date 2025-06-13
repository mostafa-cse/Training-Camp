#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main() {
    int n;
    cin >> n;

    int ans = 1;
    map<int, int> mark;
    for (int end = 0, start = 0; end < n; end++) {
        int song;
        cin >> song;

        if (mark.count(song) and mark[song] >= start) {
            start = mark[song] + 1;
        }
        mark[song] = end;
        ans = max(ans, end - start + 1);
    }
    cout << ans;
    return 0;
}
