#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; long long k;
        cin >> n >> k;
        int cnt = 1;
        while(!(k%2)) {
            ++cnt;
            k /= 2;
        }
        char kt = 'A' + cnt - 1;
        cout << kt << endl;
    }
}