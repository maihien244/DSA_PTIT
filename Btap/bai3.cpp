#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        map<int, int> a;
        int tmp;
        for(int i = 0; i < n; ++i) {
            cin >> tmp;
            a[tmp]++;
        }
        int check = 0;
        for(auto x: a) {
            if(x.second > 1) {
                tmp = x.first;
                check = 1;
                break;
            }
        }
        if(check) {
            cout << tmp << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}