#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        long long a[n];
        long long sum = 0;
        long long tmp = 1e9 + 7;
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a, a+n);
        for(int i = 0; i < n; ++i) {
            sum += a[i]*i;
        }
        cout << sum%tmp << endl;
    }
}