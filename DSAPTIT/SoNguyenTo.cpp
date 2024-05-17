#include <bits/stdc++.h>

using namespace std;
int s, p, n;
vector<int> x;
vector<int> a;
vector<vector<int>> ans;
map<int, int> sangNT;
void Sang() {
     sangNT[0] = 1;
     sangNT[1] = 1;
     for(int i = 4; i <= 200; i += 2) sangNT[i] = 1;
     for(int i = 3; i*i <= 200; i += 2) {
          if(!sangNT[i]) {
               int cnt = i;
               while(i*cnt <= 200) {
                    sangNT[i*cnt] = 1;
                    cnt += 2;
               }
          }
     }
}

void Try(int i, int ind, int sum) {
     for(int j = ind; j < x.size(); ++j) {
          if(sum + x[j] < s && i != n-1) {
               a[i] = x[j];
               Try(i+1, j+1, sum+x[j]);
          } else if(sum + x[j] == s && i == n-1) {
               a[i] = x[j];
               ans.push_back(a);
          }
     }
}

int main() {
     int t; cin >> t;
     Sang();
     while(t--) {
          cin >> n >> p >> s;
          x.clear();
          ans.clear();
          a.resize(n);
          for(int i = p+1; i <= s; ++i) {
               if(!sangNT[i]) {
                    x.push_back(i);
               }
          }
          Try(0, 0, 0);
          cout << ans.size() << endl;
          for(auto &i: ans) {
               for(auto &j: i) cout << j << " ";
               cout << endl;
          }
     }
}