#include <bits/stdc++.h>

#define FOR(i, l, r) for(int i = l; i < r; ++i)

using namespace std;

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        vector<string> kq;
        FOR(i, 0, n) cin >> a[i];
        FOR(i, 0, n-1) {
            FOR(j, i+1, n) {
                if(a[i] > a[j]) swap(a[i], a[j]);
            }
            string str = "Buoc " + to_string(i+1) + ": ";
            FOR(j, 0, n) str += to_string(a[j]) +" ";
            // cout << "Buoc " << i+1 << ": ";
            // FOR(j, 0, n) cout << a[j] << " ";
            // cout << endl;
            kq.push_back(str);
        }
        for(int i = kq.size()-1; i >= 0; --i) {
            cout << kq[i] << endl;
        }
    }
}