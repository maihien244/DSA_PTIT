#include <iostream>
#include <map>

using namespace std;

int check(int x[], int n, int k) {
    for(int i = 1; i <= k; i++) {
        if(x[i] != n-k+i) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int x[k+1];
        map<int, int> mp;
        x[0]= 0;
        for(int i = 1; i <= k; ++i) {
            cin >> x[i];
            mp[x[i]]++;
        }
        if(check(x, n, k)) {
            cout << k << endl;
        }
        else {
            int i = k;
            while(i > 0 && x[i] == n-k+i) {
                i--;
            }
            x[i]++;
            for(int j = i+1; j <= k; ++j) {
                x[j] = x[i]+j-i;
            }
            int cnt = 0;
            for(int j = 1; j <= k; ++j) {
                mp[x[j]]++;
            }
            for(auto x: mp) {
                if(x.second == 1) {
                    ++cnt;
                }
            }
            cout << cnt/2 << endl;
        }
    }
}