#include <bits/stdc++.h>

using namespace std;

#define FOR(i,l,r) for(int i = l; i < r; ++i)
#define FORD(i, l, r) for(int i = l; i <= r; ++i)


int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int x[n];
        FOR(i, 0, n) cin >> x[i];
        sort(x, x+n);
        long long cnt = 0;
        FOR(i, 0, n) {
            cnt += lower_bound(x+i+1, x+n, x[i]+k) - (x+i+1);
        }
        cout << cnt << endl;
    }
}