#include <bits/stdc++.h>

#define FOR(i, l, r) for(int i = l; i < r; ++i)

using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b) {
    if(a.second == b.second) {
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        map<int, int> x;
        vector<pair<int, int>> vt(n);
        FOR(i, 0, n) {
            cin >> a[i];
            x[a[i]]++;
        }
        FOR(i, 0, n) {
            vt[i].first = a[i];
            vt[i].second = x[a[i]];
        }
        sort(vt.begin(), vt.end(), cmp);
        FOR(i, 0, n) cout << vt[i].first << " ";
        cout << endl;
    }
}