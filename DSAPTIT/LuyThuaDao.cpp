#include <bits/stdc++.h>

using namespace std;
long long mod = 1e9 + 7;

long long powN(long long n, long long k) {
    if(k == 0) return 1;
    if(k%2) {
        long long tmp = powN(n, k/2);
        return n*(tmp*tmp%mod)%mod;
    } else {
        long long tmp = powN(n, k/2);
        return tmp*tmp%mod;
    }
}

long long phepDao(long long n) {
    long long tmp = 0;
    while(n != 0) {
        tmp =  tmp*10 + n%10;
        n /= 10;
    }
    return tmp;
}

int main() {
    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        long long r = phepDao(n);
        cout << powN(n, r) << endl;
    }
}