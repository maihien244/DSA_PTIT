#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        map<int, int> x;
        int tmp;
        for(int i = 0; i < n; ++i) {
            cin >> tmp;
            x[tmp]++;
        }
        if(x[k]) {
            cout << x[k]<< endl;
        }
        else {
            cout << -1 << endl;
        }
    }
}