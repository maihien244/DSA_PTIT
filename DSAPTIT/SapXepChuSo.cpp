#include <bits/stdc++.h>

using namespace std;

#define FOR(i, l, r) for(int i = l; i < r; ++i)
#define For(i, l, r) for(int i = l; i <= r; ++i)

int main() {
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        int b[10] = {};
        FOR(i, 0, n) {
            cin >> a[n];
            while(a[n]) {
                b[a[n]%10]++;
                a[n] /= 10;
            }
        }
        FOR(i, 0, 10) {
            if(b[i]) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}