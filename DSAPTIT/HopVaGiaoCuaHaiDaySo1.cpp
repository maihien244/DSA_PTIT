#include <bits/stdc++.h>

#define FOR(i, l, r) for(int i = l; i < r; ++i)

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        set<int> a, b;
        map<int, int> x;
        cin >> n >> m;
        int tmp;
        FOR(i, 0, n){
            cin >> tmp;
            a.insert(tmp);
        }
        FOR(i, 0, m) {
            cin >> tmp;
            b.insert(tmp);
        }
        for(auto xi: a) x[xi]++;
        for(auto xi: b) x[xi]++;
        for(auto xi: x) cout << xi.first << " ";
        cout << endl;
        for(auto xi: x) {
            if(xi.second >= 2) {
                cout << xi.first << " ";
            }
        }
        cout << endl;
    }
}