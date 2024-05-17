#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int s, d;
        cin >> s >> d;
        if((float)s/d > 9) {
            cout << -1 << endl;
        } else {
            
            vector<int> so(d);
            if((double)s/d > 9) {
                cout << -1 << endl;
            } else {
                s--;
                for(int i = d-1; i >= 0; --i) {
                    if(s >= 9) {
                        so[i] = 9;
                        s -= 9;
                    } else {
                        if(i == 0) {
                            so[i] = s+1;
                        } else {
                            so[i] = s;
                        }
                        s = 0;
                    }
                }

                for(int i = 0; i < d; ++i) cout << so[i];
                cout << endl;
            }
        }
    }
}