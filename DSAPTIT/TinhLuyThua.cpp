#include <bits/stdc++.h>

using namespace std;
long long mod = 1e9 + 7;
long long powN(int a, long long b) {
    if(b == 0) return 1;
    long long tmp = powN(a, b/2);
    if(b%2) {
        return a%mod * tmp%mod * tmp%mod;
    } else {
        return tmp%mod * tmp%mod;
    }
}

int main() {
    while(1) {
        int a; long long b;
        cin >> a >> b;
        if(!a && !b) break;
        cout << powN(a, b) << endl;
    }
}