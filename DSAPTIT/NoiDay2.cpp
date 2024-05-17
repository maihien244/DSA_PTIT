#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        long long modu = 1e9 + 7;
        multiset<int> a;
        for(int i = 0; i < n; ++i) {
            int tmp;
            cin >> tmp;
            a.insert(tmp);
        }

        cout << endl;
        long long res = 0;
        while(a.size() != 1) {
            long long tmp = 0;
            tmp += *a.begin();
            a.erase(a.begin());
            tmp += *a.begin();
            a.erase(a.begin());
            tmp %= modu;
            a.insert(tmp);
            res += tmp;
            res %= modu;
        }
        cout << res%modu << endl;
    }
}