#include <bits/stdc++.h>

using namespace std;

int find(int x[], int n, int k) {
    int l = 0, r = n-1;
    int mid = l + ((k-x[l])*(r-l)/(a[r]-a[l]));
    while(l < r) {
        if(x[mid] == k) return mid;
        if(x[mid] < k) {
            r = mid-1;
            mid = l + ((k-x[l])*(r-l)/(a[r]-a[l]));
        } else {
            l = mid+1;
            mid = l + ((k-x[l])*(r-l)/(a[r]-a[l]));
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        map<int, int> x;
        int tmp;
        for(int i = 0; i < n; ++i) {
            cin >> tmp;
            x[tmp]++;
        }
        int a[x.size()];
        int k = 0, max = 0;
        for(auto i: x) {
            if(max > i.second) max = i.second;
            a[k] = i.second;
            k++;
        }
        sort(a, a+k);
        int ind = find(a, k, max);
    }
}