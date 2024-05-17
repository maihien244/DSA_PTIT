#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int tmp ;
        int cnt = 0;
        for(int i = 0; i < n; ++i) {
            cin >> tmp;
            if(!tmp) ++cnt;
        }
        cout << cnt << endl;
    }
}