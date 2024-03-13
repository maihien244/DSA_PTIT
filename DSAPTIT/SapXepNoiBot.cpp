#include <bits/stdc++.h>

#define FOR(i, l, r) for(int i = l; i < r; ++i)

using namespace std;

void bubbleSort(int a[], int n) {
    for(int i = 0; i < n; ++i) {
        int check = 0;
        for(int j = 0; j < n-i-1; ++j) {
            if(a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
                check = 1;
            }
        }
        if(check) {
            cout << "Buoc " << i+1 << ": ";
            FOR(j, 0, n) cout << a[j] << " ";
            cout << endl;
        }
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    FOR(i, 0, n) cin >> a[i];
    bubbleSort(a, n);
}