#include <bits/stdc++.h>

using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        pair<int, int> x[n];
        for(int i = 0; i < n; ++i) {
            cin >> x[i].first >> x[i].second;
        }
        sort(x, x+n, cmp);
        int cnt = 01; 
        int start = x[0].second;
        for(int i = 1; i < n; ++i) {
            if(x[i].first >= start) {
                cnt++;
                start = x[i].second;
            }
        }
        cout << cnt << endl;
    }
}