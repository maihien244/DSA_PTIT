#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> x, int findSelector) {
    int left = 0, right = x.size()-1;
    while(left <= right) {
        int mid = (left+right)/2;

        if(x[mid] == findSelector) {
            return mid;
        }
        if(x[mid] < findSelector) {
            left = mid+1;
        } else {
            right = mid-1;
        }
    }

    return -1;
}

int main() {
    int t;  cin >> t;
    while(t--) {
        int n, m, k; cin >> n >> m >> k;
        vector<int> a, b, c;
        a.resize(n);
        b.resize(m);
        c.resize(k);
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for(int i = 0; i < m; ++i) {
            cin >> b[i];
        }
        for(int i = 0; i < k; ++i) {
            cin >> c[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());
        int isprinted = 0;
        for(int i = 0; i < n; ++i) {
            if(binarySearch(b, a[i]) != -1 && binarySearch(c, a[i]) != -1) {
                cout << a[i] << " ";
                isprinted = 1;
                b.erase(b.begin()+binarySearch(b, a[i]));
                c.erase(c.begin()+binarySearch(c, a[i]));
            }
        }
        if(isprinted == 0) {
            cout << "NO" ;
        }
        cout << endl;
    }
}