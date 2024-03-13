#include <bits/stdc++.h>

using namespace std;

#define FOR(i, l, r) for(int i = l; i < r; ++i)
#define For(i, l, r) for(int i = l; i <= r; ++i)

int main() {
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int n, k, cnt = 0;
        cin >> n >> k;
        int x[n];
        FOR(i, 0, n) {
            cin >> x[i];
        }
        FOR(i, 0, n-1) {
            FOR(j, i+1, n) {
                if(x[j] == k-x[i]) cnt++;
            }
        }
        cout << cnt << endl;
    }
}