#include <bits/stdc++.h>

using namespace std;
int x[9][9];
int c[9], c1[16], c2[16];
int res;

void Try(int i, int sum ) {
     if(i < 8) {
          for(int j = 1; j <= 8; ++j) {
               if(!c[j] && !c1[i-j+8-1] && !c2[i+j-2]) {
                    c[j] = 1;
                    c1[i-j+8-1] = 1;
                    c2[i+j-2] = 1;
                    Try(i+1, sum + x[i][j]);
                    c[j] = 0;
                    c1[i-j+8-1] = 0;
                    c2[i+j-2] = 0;
               }
          }
     } else {
          for(int j = 1; j <= 8; ++j) {
               if(!c[j] && !c1[i-j+8-1] && !c2[i+j-2]) {
                    res = max(res, sum+x[i][j]);
               }
          }
     }
}

int main() {
     int t; cin >> t;
     while(t--) {
          res = 0;
          for(int i = 1; i <= 8; ++i) {
               for(int j = 1; j <= 8; ++j) {
                    cin >> x[i][j];
               }
          }
          for(int i = 1; i <= 8; ++i) {
               c[i] = 0;
          }
          for(int i = 1; i < 16; ++i) {
               c1[i] = 0;
               c2[i] = 0;
          }
          Try(1, 0);
          cout << res << endl;
     }
}