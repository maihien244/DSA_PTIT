#include <bits/stdc++.h>

using namespace std;
map<int, int> fib;

int getFib(int n) {
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i <= n; ++i) fib[i] = fib[i-1] + fib[i-2];
    return fib[n];
}

int main() {
    int n; cin >> n;
    cout << getFib(n);
}