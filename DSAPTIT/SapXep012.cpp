#include <bits/stdc++.h>

#define FOR(i, l, r) for(int i = l; i < r; ++i)
#define FORD(i, l , r) for(int i = l; i > r; --i)
#define For(i, l, r) for(int i = l; i <= r; ++i)
#define ForD(i, l, r) for(int i = l; i >= r; --i)

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int x[n];
        FOR(i, 0, n) cin >> x[i];
        sort(x, x+n);
        FOR(i, 0, n) cout << x[i] << " ";
        cout << endl;
    }
}