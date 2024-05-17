#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int t; cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        int sum = 0, sum1 = 0, sum2 = 0;
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }
        sort(a, a+n);
        for(int i = 0; i < n; ++i) {
            if(i < k) sum1 += a[i];
            if(i < n-k) sum2 += a[i];
        }
        cout << max(sum - 2*sum1, sum - 2*sum2) << endl;
    }
}