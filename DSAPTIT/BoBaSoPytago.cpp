#include <bits/stdc++.h>

using namespace std;


int main() {
     int t; cin >> t;
     while(t--) {
          int n; cin >> n;
          string str = "NO";
          vector<long long> x(n);
          map<int, int> a;
          for(int i = 0; i < n; ++i) {
               cin >> x[i];
               a[x[i]] = 1;
          }
          sort(x.begin(), x.end());
          for(int i = 0; i < n-1; ++i) {
               for(int j = i+1; j < n; ++j) {
                    long long C = pow(x[i], 2) + pow(x[j], 2);
                    int c = sqrt(C);
                    if(c*c == C && a[c]) {
                         str = "YES";
                         break;
                    }
               }
               if(str == "YES") break;
          }
          cout << str << endl;
     }
}