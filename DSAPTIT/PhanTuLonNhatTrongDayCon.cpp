#include <bits/stdc++.h>

using namespace std;

int main() {
     int t;
     cin >> t;
     while(t--) {
          int n, k;
          cin >> n >> k;
          int a[n];
          for(int i = 0; i < n; ++i) {
               cin >> a[i];
          }
          int max = a[0];
          for(int i = 0; i < k; ++i) {
               if(max < a[i]) max = a[i];
          }
          cout << max << " ";
          for(int i = k; i < n; ++i) {
               if(a[i] > max && a[i-k] != max) {
                    max = a[i];
               }
               if(a[i-k] == max) {
                    max = a[i-k+1];
                    for(int j = i-k+1; j <= i; ++j) {
                         if(a[j] > max) max = a[j];
                    }
               }
               cout << max << " ";
          }
          cout << endl;
     }
}