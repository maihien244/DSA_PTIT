#include <bits/stdc++.h>

using namespace std;

int main() {
     ios_base::sync_with_stdio(false);
     int t;
     cin >> t;
     while(t--) {
          int n;
          cin >> n;
          long long x[n];
          for(int i = 0; i < n; ++i) cin >> x[i];
          sort(x, x+n);
          long long min = 1e9;
          for(int i = 0; i < n-1; ++i) {
               for(int j = i+1; j < n; ++j) {
                    if(abs(x[j]-x[i]) < min) {
                         min = abs(x[j]-x[i]);
                    } else {
                         break;
                    } 
               }
          }
          cout << min << endl;
     }
}