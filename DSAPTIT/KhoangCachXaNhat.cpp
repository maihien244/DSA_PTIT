#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i < r; ++i)
#define FORD(i, l, r) for(int i = l; i <= r; ++i)

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
     return a.first < b.first;
}

int main(){
     ios_base::sync_with_stdio(false);
     int t;
     cin >> t;
     while(t--) {
          int n;
          cin >> n;
          vector<pair<int, int>> x;
          x.resize(n);
          FOR(i, 0, n) {
               cin >> x[i].first;
               x[i].second = i;
          }
          sort(x.begin(), x.end(), cmp);
          int ans = -1;
          int min = x[0].second;
          int tmp = x[0].first;
          FOR(i, 1, n) {
               if(x[i].second < min) {
                    min = x[i].second;
                    tmp = x[i].first;
               }
               if(tmp < x[i].first) {
                    ans = max(ans, x[i].second-min);
               } 
          }
          cout << ans << endl;
     }
}