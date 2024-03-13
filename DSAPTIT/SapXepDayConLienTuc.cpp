#include <bits/stdc++.h>

#define FOR(i, l, r) for(int i = l; i < r; ++i)
#define FORD(i, l , r) for(int i = r-1; i >= l; --i)
#define For(i, l, r) for(int i = l; i <= r; ++i)
#define ForD(i, l, r) for(int i = r-1; i >= l; --i)

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n], b[n];
        FOR(i, 0, n) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a, a+n);
        int l = 0, r = n-1;
        while(a[l] == b[l]) ++l;
        while(a[r] == b[r]) --r;
        cout << l+1 << " " << r+1 << endl;
    }
}