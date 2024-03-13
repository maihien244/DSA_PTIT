#include <bits/stdc++.h>

#define FOR(i, l, r) for(int i = l; i < r; ++i)

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        set<int> a;
        int tmp;
        FOR(i, 0, n) {
            cin >> tmp;
            a.insert(tmp);
        }
        if(a.size() < 2) {
            cout << -1 << endl;
        }
        else {
            int k = 2;
            for(auto &x: a) {
                cout << x << " ";
                k--;
                if(k == 0) {
                    cout << endl;
                    break;
                }
            }
        }
    }
}