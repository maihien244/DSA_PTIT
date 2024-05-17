#include <bits/stdc++.h>

using namespace std;

int findMax(int a[], int n) {
    int d[n] = {1};
    for(int i = 1; i < n-1; ++i) {
        for(int j = 0; j < i; ++j) {
            if(a[i] > a[j]) {
                d[i] = max(d[i], d[j]+1);
            }
        }
    }
    sort(d, d+n);
    return d[n-1];
}

int main() {
    // int t; cin >> t;
    // while(t--) {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << findMax(a, n) << endl;
    // }
}