#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        multiset<long long> a;
        long long res = 0;
        for(int i = 0; i < n; ++i) {
            int m; cin >> m;
            a.insert(m);
        }
        // cout << *a.begin() << endl;
        // for(int i = 0; i < a.size(); ++i) cout << a[i] << " ";
        // cout << endl;
        while(a.size() != 1) {
            long long tmp = 0;
            tmp += *a.begin();
            a.erase(a.begin());
            // for(auto x: a) cout << x << " ";
            // cout << endl;
            tmp += *a.begin();
            a.erase(a.begin());
            // for(auto x: a) cout << x << " ";
            // cout << endl;
            a.insert(tmp);
            res += tmp;
            // for(auto x: a) cout << x << " ";
            // cout<< "------------------------------" << endl;
        }
        cout << res << endl;
    }
}