#include <bits/stdc++.h>

using namespace std;
long long mod = 1e9 +7;

long long tinhSoMu(long long n, long long k) {
    if(k == 0) {
        return 1;
    } else if(!(k%2)) {
        long long tmp = tinhSoMu(n, k/2);
        return tmp%mod * tmp%mod;
    } else {
        long long tmp = tinhSoMu(n, k/2);
        return n%mod * tmp%mod * tmp%mod;
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        long long n, k;
        cin >> n >> k;
        cout << tinhSoMu(n, k) << endl;
    }
}