#include <bits/stdc++.h>

#define FOR(i, l, r) for(int i = l; i < r; ++i)

using namespace std;
vector<string> kq;

void selectionSort(int a[], int n) {
    for(int i = 0; i < n-1; ++i) {
        int ind = i;
        for(int j = i+1; j < n; ++j) {
            if(a[ind] > a[j]) ind = j;
        }
        swap(a[ind], a[i]);
        string str = "Buoc " + to_string(i+1) + ": ";
        FOR(j, 0, n) str += to_string(a[j]) +" ";
        kq.push_back(str);
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    FOR(i, 0, n) cin >> a[i];
    selectionSort(a, n);
    for(int i = kq.size()-1; i >= 0; --i) {
        cout << kq[i] << endl;
    }
}