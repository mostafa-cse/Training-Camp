#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);
    int n;
    cin >> n;

    for(int i =0; i < (1LL << n) ; i++){
        int tem = i ^ (i >> 1);
        for(int j = n - 1; j >= 0; j--){
            cout << (tem >> j & 1);
        }
        cout<< endl;
    }
    return 0;
}