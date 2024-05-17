#include <bits/stdc++.h>

using namespace std;
long long bin[100];

int find(long long n, long long k) {
    if(n == 1) return 0;
    if(n == 2) return 1;
    if(k > bin[n-2]) {
        return find(n-1, k-bin[n-2]);
    } else {
        return find(n-2, k);
    }
}

int main() {
    int t; cin >> t;
    bin[1] = 1;
    bin[2] = 1;
    for(int i = 3; i < 100; ++i) bin[i] = bin[i-1] + bin[i-2];
    while(t--) {
        long long n, k;
        cin >> n >> k;
        cout << find(n, k) << endl;
    }
}