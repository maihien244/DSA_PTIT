#include <bits/stdc++.h>
#define FOR(i, l , r) for(int i = l; i < r; ++i) 

using namespace std;

int check(int x[], int n) {
     FOR(i, 1, n) {
          if(x[i] != x[0]) {
               return 1;
          }
     }
     return 0;
}

int main() {
     ios_base::sync_with_stdio(false);
     int t; cin >> t;
     while(t--) {
          int n, ans = 0; cin >> n;
          int ind1 = -1, ind2 = -1;
          int x[n];
          FOR(i, 0, n) cin >> x[i];
          FOR(i, 0, n) {
               if(x[i] <= x[i+1] && ind1 == -1) {
                    ind1 = i;
                    // cout << ind1 << endl;
               }
               if(x[i] >= x[i+1] && ind1 != -1){
                    ind2 = i+1;
                    // cout << ind1 << " "<< ind2 << endl;
               } else if(x[i] < x[i+1] && ind2 != -1 && ind1 != -1) {
                    ans = max(ans, ind2-ind1+1);
                    ind1 = -1;
                    ind2 = -1;
                    i--;
                    // cout << ans << endl;
               }
          }
          if(check(x, n)) {
               if(ans == 0) ans = n;
          } else {
               ans = 0;
          }
          cout << ans << endl;
     }
}