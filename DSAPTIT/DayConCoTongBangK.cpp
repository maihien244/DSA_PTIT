#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> x, a;
vector<vector<int>> ans;

void check() {
    int sum = 0;
    for(int i = 0; i < n; ++i) sum += x[i]*a[i];
    if(sum == k) ans.push_back(a);
}

void Try(int i) {
     for(int j = 1; j >= 0; --j) {
          a[i] = j;
          if(i == n-1) check();
          else Try(i+1);
     }
}

int main() {
     ios_base::sync_with_stdio(0);
     cin.tie(NULL); cout.tie(NULL);
     int t;
     cin >> t;
     while(t--) {
          cin >> n >> k;
          x.resize(n);
          a.resize(n);
          for(int i = 0; i < n; ++i) cin >> x[i];
          sort(x.begin(), x.end());
          Try(0);
          if(ans.empty()) {
               cout << -1 << endl;
               continue;
          }
          for(vector<int> &i: ans) {
               vector<int> tmp;
               for(int j = 0; j < n; ++j) {
                    if(i[j]) tmp.push_back(x[j]);
               }
               cout << "[";
               int length = tmp.size();
               for(int j = 0; j < length-1; ++j) {
                    cout << tmp[j] <<" ";
               }
               cout << tmp[length-1] << "] ";
          }
          cout << endl;
          ans.clear();
     }
}