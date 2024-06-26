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
          cin >> n >> k;
          x.resize(n);
          a.resize(n);
          for(int i = 0; i < n; ++i) cin >> x[i];
          sort(x.begin(), x.end());
          Try(0);
          if(ans.empty()) {
               cout << -1 << endl;
          } else {
            for(int i = ans.size()-1; i >= 0; --i) {
                vector<int> tmp = ans[i];
                for(int j = 0; j < tmp.size(); ++j) {
                    if(tmp[j]) cout << x[j] << " ";
                }
                cout << endl;
            }
            cout << ans.size() << endl;
          }
     
}