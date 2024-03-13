#include <bits/stdc++.h>

#define FOR(i, l, r) for(int i = l; i < r; ++i)

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        map<int,int> x;
        FOR(i, 0, n) {
            cin >> a[i];
            x[a[i]] = 1;
        }
        sort(a, a+n);
        int cnt = 0;
        FOR(i, a[0], a[n-1]) {
            if(!x[i]) cnt++;
        }
        cout << cnt << endl;
    }
}