#include<bits/stdc++.h>
#define int long long
using namespace std;
vector<string> board(8);
vector<bool> occupied(20, false), priamry(20, false), secondary(20, false);
int rec(int row) {
    if (row == 8) {
        return 1;
    }
    int ans = 0;
    for (int col = 0; col < 8; col++) {
        if (board[row][col] == '*' or occupied[col] or priamry[row + col] or secondary[row - col + 8]) {
            continue;
        }
        occupied[col] = priamry[row + col] = secondary[row - col + 8] = 1;
        ans += rec(row + 1);
        occupied[col] = priamry[row + col] = secondary[row - col + 8] = 0;
    }
    return ans;
}
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);
    for (auto &row : board) {
        cin >> row;
    }
    cout << rec(0);
    return 0;
}