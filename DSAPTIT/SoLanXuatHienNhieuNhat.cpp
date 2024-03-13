#include <iostream>
#include <map>

using namespace std;

int main() {
     int t;
     cin >> t;
     while(t--) {
          int n;
          cin >> n;
          int tmp;
          int check = 0;
          map<int, int> a;
          for(int i = 0; i < n; ++i) {
               cin >> tmp;
               a[tmp]++;
          }
          for(auto x: a) {
               if(x.second > n/2) {
                    cout << x.first << endl;
                    check = 1;
               }
          }
          if(check == 0) {
               cout << "NO" << endl;
          }
     }
}
