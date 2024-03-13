#include <bits/stdc++.h>

#define FOR(i, l, r) for(int i = l; i < r; ++i)

using namespace std;

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    FOR(i, 0, n) cin >> a[i];
    FOR(i, 0, n-1) {
        FOR(j, i+1, n) {
            if(a[i] > a[j]) swap(a[i], a[j]);
        }
        cout << "Buoc " << i+1 << ": ";
        FOR(j, 0, n) cout << a[j] << " ";
        cout << endl;
    }
}