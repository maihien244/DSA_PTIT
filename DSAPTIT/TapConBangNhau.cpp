#include <bits/stdc++.h>

using namespace std;
int n, k;
vector<int> x;
string check;

void Try(int i, int sum) {
     if(check == "YES") return;
     for(int j = i+1; j < n; ++j) {
          if(sum+x[j] < k && check != "YES") {
               Try(j, sum+x[j]);
          }else if(sum+x[j] == k) {
               check = "YES";
          }
     }
}

int main() {
     int t; cin >> t;
     while(t--) {
          cin >> n;
          k = 0;
          x.resize(n);
          check = "NO";
          for(int i = 0; i < n; ++i) {
               cin >> x[i];
               k += x[i];
          }
          if(k%2) {
               cout << "NO" << endl;
          } else {
               k /= 2;
               Try(0, 0);
               cout << check << endl;
          }
     }
}