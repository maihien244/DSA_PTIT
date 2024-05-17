#include <bits/stdc++.h>

using namespace std;
int n;
string str;
string mx;

void Try(int i) {
     if(i < n) {
          for(int j = 0; j < str.length(); ++j) {
               for(int l = j+1; l < str.length(); ++l) {
                    if(str[j] < str[l]) {
                         swap(str[j], str[l]);
                         mx = max(mx, str);
                         Try(i+1);
                         swap(str[j], str[l]);
                    }
               }
          }
     }
}

int main() {
     int t; cin >> t;
     while(t--) {
          cin >> n;
          cin >> str;
          mx = str;
          Try(0);
          cout << mx << endl;
     }
}