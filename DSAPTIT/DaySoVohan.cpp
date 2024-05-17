#include <bits/stdc++.h>

using namespace std;
long long mod = 1e9 + 7;

int main() {
    int n; cin >> n;
    int a[n];
    int m = 0;
    map<int, long long> fib;
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        m= max(m, a[i]);
    }
    for(int i = 2; i <= m; ++i) {
        fib[i] = (fib[i-1]%mod + fib[i-2]%mod)%mod;
    }
    for(int i = 0; i < n; ++i) cout << fib[a[i]] << endl;
}