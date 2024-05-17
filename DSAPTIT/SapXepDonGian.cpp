#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    int dp[n+1] = {};
    int res = 0;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        dp[a[i]] = dp[a[i]-1] + 1;
        res = max(res, dp[a[i]]);
    }
    cout << n-res << endl;
}