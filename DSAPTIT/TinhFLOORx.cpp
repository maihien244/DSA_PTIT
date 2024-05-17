#include <bits/stdc++.h>

using namespace std;
int n;
vector<long long> a;
int FLOOR(long long x) {
    int left = 0, right = n-1;
    while(left <= right) {
        int mid = (left + right)/2;
        if(a[mid] == x) return mid+1;
        if(a[mid] < x && a[mid+1] > x) return mid+1;
        if(a[mid] < x) left = mid+1;
        if(a[mid] > x) right = mid-1; 
    }
    return -1;
}

int main() {
    int t; cin >> t;
    while(t--) {
        long long x;
        cin >> n >> x;
        a.resize(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        cout << FLOOR(x) << endl;
        a.clear();
    }
}