#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n ; cin >> n;
        pair<long long, long long> a[n];
        for(int i = 0; i < n; ++i) cin >> a[i].first;
        for(int i = 0; i < n-1; ++i) cin >> a[i].second;
        for (int i = 0; i < n; ++i)
        {
            if(a[i].first != a[i].second) {
                cout << i+1 << endl;
                break;
            }
        }
    }
}