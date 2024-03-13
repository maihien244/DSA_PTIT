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
        long long a[n], b[m];
        FOR(i, 0, n) cin >> a[i];
        FOR(i, 0, m) cin >> b[i];
        sort(a, a+n);
        sort(b, b+m);
        long long tmp = a[n-1]*b[0];
        cout << tmp << endl;
    }
}