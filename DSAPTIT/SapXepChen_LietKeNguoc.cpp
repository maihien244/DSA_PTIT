#include <bits/stdc++.h>

#define FOR(i, l, r) for(int i = l; i < r; ++i)

using namespace std;

vector<string> kq;

void insertionSort(int a[], int n) {
    for(int i = 1; i < n; ++i) {
        string str = "Buoc " + to_string(i-1) + ": ";
        FOR(j, 0, i) str += to_string(a[j]) + " ";
        kq.push_back(str);
        int tmp = a[i];
        int ind = i-1;
        while(ind >= 0 && a[ind] > tmp) {
            a[ind+1] = a[ind];
            ind--;
        }
        a[ind+1] = tmp;
    }
    string str = "Buoc " + to_string(n-1) + ": ";
    FOR(j, 0, n) str += to_string(a[j]) + " ";
    kq.push_back(str);
}

int main() {
    int n;
    cin >> n;
    int a[n];
    FOR(i, 0, n) cin >> a[i];
    insertionSort(a, n);
    for(int i = kq.size()-1; i >= 0; --i) {
        cout << kq[i] << endl;
    }
}