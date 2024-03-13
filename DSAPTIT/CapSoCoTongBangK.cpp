#include <bits/stdc++.h>
#define FOR(i, l , r) for(int i = l; i < r; ++i) 

using namespace std;

int main() {
     int t;
     cin >> t;
     while(t--) {
          long long n, k, cnt = 0;
          cin >> n >> k;
          long long x[n];
          map<long long, pair<long long, long long>> a;
          FOR(i, 0, n) {
               cin >> x[i];
          }
          sort(x, x+n);
          // FOR(i, 0, n) cout << x[i] << " ";
          cout << endl;
          FOR(i, 0, n) {
               if(!a[x[i]].second) {
                    a[x[i]].first = i;
                    a[x[i]].second++;
               } else {
                    a[x[i]].second++;
               }
          }
          // for(auto t : a) {
          //      cout << t.first << " " << t.second.first << " " << t.second.second << endl;
          // }
          FOR(i, 0, n) {
               if(a[k-x[i]].second) {
                    if(i < a[k-x[i]].first) {
                         cnt += a[k-x[i]].second;
                    }
               }
               if(k-x[i] == x[i] && i == (a[k-x[i]].first)) {
                    cnt += a[k-x[i]].second*(a[k-x[i]].second-1)/2;
               }
          }
          cout << cnt << endl;
     }
}