#include <bits/stdc++.h>

#define FOR(i, l, r) for(int i = l; i < r; ++i)

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int tmp;
        map<int, int> a;
        FOR(i, 0, n) {
            cin >> tmp;
            a[tmp]++;
        }
        if(a[k]) {
            cout << 1 << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
}