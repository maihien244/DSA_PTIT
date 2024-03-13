#include <bits/stdc++.h>

#define FOR(i, l, r) for(int i = l; i < r; ++i)

using namespace std;

void insertionSort(int a[], int n) {
    for(int i = 1; i < n; ++i) {
        cout << "Buoc " << i-1 << ": ";
        FOR(j, 0, i) cout << a[j] << " ";
        cout << endl;
        int tmp = a[i];
        int ind = i-1;
        while(ind >= 0 && a[ind] > tmp) {
            a[ind+1] = a[ind];
            ind--;
        }
        a[ind+1] = tmp;
    }
    cout << "Buoc " << n-1 << ": ";
    FOR(j, 0, n) cout << a[j] << " ";
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    FOR(i, 0, n) cin >> a[i];
    insertionSort(a, n);
}