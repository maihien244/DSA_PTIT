#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, v;
        cin >> n >> v;
        int x[n+1][v+1] = {};
        pair<int, int> a[n+1];
        for(int i = 1; i <= n; ++i) {
            cin >> a[i].first;
        }
        for(int i = 1; i <= n; ++i) {
            cin >> a[i].second;
        }
        for(int i = 1; i <= n; ++i) {
            for(int j = 0; j <= v; ++j) {
                x[i][j] = x[i-1][j];
                if(j >= a[i].first) {
                    x[i][j] = max(x[i][j], x[i-1][j-a[i].first] + a[i].second);
                }
            }
        }
        cout << x[n][v] << endl;
    }
}