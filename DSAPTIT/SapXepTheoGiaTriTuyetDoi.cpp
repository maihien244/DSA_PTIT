#include <bits/stdc++.h>

using namespace std;

int k;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if(abs(k-a.first) == abs(k-b.first)) {
        return a.second < b.second;
    }
    return abs(k-a.first) < abs(k-b.first);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n >> k;
        vector<pair<int, int>> a;
        a.resize(n);
        for(int i = 0; i < n; ++i) {
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a.begin(), a.end(), cmp);
        for(int i = 0; i < n; ++i) {
            cout << a[i].first << " ";
        }
        cout << endl;
    }
}