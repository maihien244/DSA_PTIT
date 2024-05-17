#include <bits/stdc++.h>

using namespace std;
int n, cnt;
// int x[11][11];
vector<int> c, c1, c2;

int check(int i, int j) {
     if(c[j] || c1[i-j+n-1] || c2[i+j-2]) {
          return 0;
     }
     return 1;
}

void Try(int i) {
     if(i < n) {
          for(int j = 1; j <= n; ++j) {
               if(check(i, j)) {
                    c[j] = 1;
                    c1[i-j+n-1] = 1;
                    c2[i+j-2] = 1;
                    // x[i][j] = 1;
                    Try(i+1);
                    // x[i][j] = 0;
                    c[j] = 0;
                    c1[i-j+n-1] = 0;
                    c2[i+j-2] = 0;
               }
          }
     } else {
          for(int j = 1; j <= n; ++j) {
               if(check(i, j)) {
                    cnt++;
               }
          }
     }
}

int main() {
     ios_base::sync_with_stdio(0);
     int t;
     cin >> t;
     while(t--) {
          cin >> n;
          cnt = 0;
          c.resize(n+1);
          c1.resize(2*n);
          c2.resize(2*n);
          for(int i = 1; i <= n; ++i) {
               c[i] = 0;
               // for(int j = 1; j <= n; ++j) {
               //      x[i][j] = 0;
               // }
          } 
          for(int i = 1; i < 2*n; ++i) {
               c1[i] = c2[i] = 0;
          }
          Try(1);
          cout << cnt << endl;
     }
}