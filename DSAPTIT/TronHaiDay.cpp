#include <bits/stdc++.h>

#define FOR(i, l, r) for(int i = l; i < r; ++i)

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        long long n, m;
        cin >> n >> m;
        n += m;
        long long a[n];
        FOR(i, 0, n) cin >> a[i];
        sort(a, a+n);
        FOR(i, 0, n) cout << a[i] << " ";
        cout << endl;
    }
}