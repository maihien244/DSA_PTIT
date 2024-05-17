#include <bits/stdc++.h>

using namespace std;

int main() {
     int t; cin >> t;
     while(t--) {
          int n; cin >> n;
          int check = 0;
          int x[n];
          map<int, int> a;
          for(int i = 0; i < n; ++i) {
               cin >> x[i];
               a[x[i]]++;
          }
          for(int i = 0; i < n; ++i) {
               if(a[x[i]] != 1) {
                    check = 1;
                    cout << x[i] << endl;
                    break;
               }
          }
          if(check == 0) {
               cout << "NO" << endl;
          }
     }
}