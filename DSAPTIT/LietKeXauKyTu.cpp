#include <bits/stdc++.h>

using namespace std;
char c;
int k;
int length;

int check(string str) {
     for(int i = 0; i < str.length()-1; ++i) {
          if(str[i] > str[i+1]) return 0;
     }
     return 1;
}

void findLengthString(char c) {
     length = c - 'A';
}

void Try(int i, string str) {
     for(int j = 0; j <= length; ++j) {
          char tmp = 'A' + j;
          if(i < k) {
               Try(i+1, str+tmp);
          } else {
               if(check(str+tmp)) {
                    cout << str<<tmp << endl;
               }
          }
     }
}

int main() {
     cin >> c >> k;
     findLengthString(c);
     Try(1, "");
}