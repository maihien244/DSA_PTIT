#include <bits/stdc++.h>

using namespace std;
int n, k;
int findBinary(int a[]) {
    int left = 0, right = n-1;
    if(a[left] == k) return left;
    if(a[right] == k) return right;
    while(left <= right) {
        int mid = (left + right)/2;
        if(a[mid] == k) return mid;
        if(a[mid] < k) left = mid+1;
        if(a[mid] > k) right = mid-1;
    }
    return -1;
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; ++i) cin >> a[i];
        int index = findBinary(a);
        if(index != -1) {
            cout << index+1 << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}