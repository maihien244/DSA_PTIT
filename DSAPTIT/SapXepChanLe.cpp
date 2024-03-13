#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b) {
     return a > b;
}

int main() {
     int n;
     cin >> n;
     vector<int> a;
     vector<int> b;
     int tmp;
     for(int i = 0; i < n; ++i) {
          cin >> tmp;
          if(i%2) {
               b.push_back(tmp);
          } else {
               a.push_back(tmp);
          }
     }
     sort(a.begin(), a.end());
     sort(b.begin(), b.end(), cmp);
     for(int i = 0; i < n; ++i) {
          if(i%2) {
               cout << b[(i-1)/2] << " ";
          } else {
               cout << a[i/2] << " ";
          }
     }
     cout << endl;
}