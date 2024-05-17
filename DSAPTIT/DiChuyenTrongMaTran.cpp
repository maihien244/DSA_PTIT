#include <bits/stdc++.h>

using namespace std;
int m, n;
int a[100][100];
int cnt;

void Try(int i, int j) {
     if(i == m-1 && j == n-1){
          cnt++;
     }
     if(i < m-1) {
          Try(i+1, j);
     }
     if(j < n-1) {
          Try(i, j+1);
     }
}

int main() {
     ios_base::sync_with_stdio(0);
     int t;
     cin >> t;
     while(t--) {
          cin >> m >> n;
          cnt = 0;
          for(int i = 0; i < m; ++i) {
               for(int j = 0; j < n; ++j) {
                    cin >> a[i][j];
               }
          }
          Try(0, 0);
          cout << cnt << endl;
     }
}