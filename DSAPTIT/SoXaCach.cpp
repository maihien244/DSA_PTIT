#include <bits/stdc++.h>

using namespace std;
int n;
vector<int> x;
int a[10];

int check(vector<int> x) {
     for(int i = 0; i < n-1; ++i) {
          if(abs(x[i]-x[i+1]) == 1) return 0;
     }
     return 1;
}

void Try(int i) {
     for(int j = 1; j <= n; ++j) {
          if(i != n-1 && !a[j]) {
               a[j] = 1;
               x[i] = j;
               Try(i+1);
               a[j] = 0;
          } else if(i == n-1 && !a[j]) {
               x[i] = j;
               if(check(x)) {
                    for(int l = 0; l < n; ++l) cout << x[l];
                    cout << endl;
               }
          }
     }
}

int main() {
     int t;
     cin >> t;
     while(t--) {
          cin >> n;
          x.resize(n);
          for(int i = 0; i < n; ++i) x[i] = i+1;
          for(int i = 0; i < 10; ++i) a[i] = 0; 
          Try(0);
          cout << endl;
     }
}