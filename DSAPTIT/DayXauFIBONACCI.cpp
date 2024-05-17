#include <bits/stdc++.h>

using namespace std;
long long fib[100];

char kyTu(long long n, long long i) {
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(i <= fib[n-2]) {
        return kyTu(n-2, i);
    } else {
        return kyTu(n-1, i-fib[n-2]);
    }
}

int main() {
    int t; cin >> t;
    fib[1] = 1; fib[2] = 1;
    for(int i = 3;i <= 93; ++i) fib[i] = fib[i-1]+fib[i-2];
    while(t--) {
        long long n, i;
        cin >> n >> i;
        cout << kyTu(n, i) << endl;
    }
}