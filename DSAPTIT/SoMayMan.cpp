#include <bits/stdc++.h>

using namespace std;
vector<int> so;
int n;

int Try() {
    while(n >= 0) {
        if(n >= 4) {
            if(!(n%7)) {
                while(n) {
                    so.push_back(7);
                    n -= 7;
                }
            } else {
                so.push_back(4);
                n -= 4;
            }
        }
        if(n > 0 && n < 4) return -1;
        if(n == 0) break;
    }
    return 1;
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n;
        int isChecked = Try();
        
        if(isChecked == -1) {
            cout << -1 << endl;
        } else {
            for(int i = 0; i < so.size(); ++i) cout << so[i];
            cout << endl;
        }
        so.clear();
    }
}