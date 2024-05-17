#include <bits/stdc++.h>

using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        pair<int, int> a[n];
        int dp[n];
        for(int i = 0; i < n; ++i) {
            cin >> a[i].first;
        }
        for(int i = 0; i < n; ++i) {
            cin >> a[i].second;
        }
        sort(a, a+n, cmp);
        for(int i = 0; i < n; ++i) {
            dp[i] = 1;
        }
        int mx = 0;
        for(int i = 1; i < n; ++i) {
            int res = 0;
            for(int j = 0; j < i; ++j) {
                if(a[i].first >= a[j].second) {
                    res = max(dp[j], res);
                }
            }
            dp[i] += res;
            mx = max(dp[i], mx);
        }
        cout << mx << endl;
    }
}