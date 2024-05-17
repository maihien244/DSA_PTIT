#include <bits/stdc++.h>

using namespace std;

int check(int a[], int n) {
    int b[n];
    for(int i = 0; i < n; ++i) {
        b[i] = a[i];
    }
    sort(b, b+n);
    for(int i = 0; i < n; ++i) {
        if(b[i] != a[i] && b[i] != a[n-1-i]) return 0;
    }
    return 1;
}

int main() {
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; ++i) cin >> a[i];
        if(check(a, n)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}