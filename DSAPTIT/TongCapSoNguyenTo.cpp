#include <bits/stdc++.h>

using namespace std;

vector<int> sangNT(1000001, 1);

void sang() {
    sangNT[0] = 0;
    sangNT[1] = 0;
    for(int i = 2; i <= 1000; ++i) {
        if(sangNT[i]) {
            for(int j = i*i; j <= 1000000; j += i) {
                sangNT[j] = 0;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    sang();
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int check = 0;
        if(n <= 3) {
            cout << -1 << endl;
            check = 1;
        }
        else {
            for(int i = 2; i <= n/2; ++i) {
                if(sangNT[i] && sangNT[n-i]) {
                    cout << i << " " << n-i << endl;
                    check = 1;
                    break;
                }
            }
        }
        if(!check) {
            cout << -1 << endl;
        }
    }
}