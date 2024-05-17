#include <bits/stdc++.h>

using namespace std;

int main() {
     int t; cin >> t;
     while(t--) {
          int n; cin >> n;
          int check = 1;
          int a[n], b[n];
          for(int i = 0; i < n; ++i) {
               cin >> a[i];
               b[i] = a[i];
          }
          for(int i = 1; i < n; ++i) {
               a[i] += a[i-1];
          }
          for(int i = n-2; i >= 0; --i) {
               b[i] += b[i+1];
          }
          for(int i = 0; i < n; ++i) {
               if(a[i] == b[i]) {
                    cout << i+1 << endl;
                    check = 0;
                    break;
               }
          }
          if(check) cout << -1 << endl;
     }
}