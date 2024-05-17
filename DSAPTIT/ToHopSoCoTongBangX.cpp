#include <bits/stdc++.h>

using namespace std;
int n, x;
int a[20];
vector<string> ans;

void Try(int i, int sum, string str) {
     if(sum+a[i] < x) {
          Try(i, sum+a[i], str+' '+to_string(a[i]));
     }
     if(i != n-1) {
          Try(i+1, sum, str);
     }
     if(sum +a[i]== x) {
          ans.push_back(str+' '+to_string(a[i]));
     }
}

int main() {
     int t;
     cin >> t;
     while(t--) {
          cin >> n >> x;
          ans.clear();
          for(int i = 0; i < n; ++i) {
               cin >> a[i];
          }
          sort(a, a+n);
          Try(0, 0,"");
          if(ans.empty()) {
               cout << -1;
          } else {
               for(string &i: ans){
                    cout << "[";
                    for(int j = 1; j < i.length(); ++j) {
                         cout << i[j];
                    }
                    cout << "]";
               }
          }
          cout << endl;
     }
}