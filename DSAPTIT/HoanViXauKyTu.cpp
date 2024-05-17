#include <bits/stdc++.h>

using namespace std;

void swap(char &a, char &b) {
     char tmp = a;
     a = b;
     b = tmp;
}

int check(string str) {
     int length = str.length();
     for(int i = 0; i < length-1; ++i) {
          if((int)str[i] < (int)str[i+1]){
               return 1;
          }
     }
     return 0;
}

void backTracking(int i, string str) {
     if(str[i] > str[i+1]) {
          backTracking(i-1, str);
     } else if(i >= 0) {
          int ind = i+1;
          for(int j = i+1; j < str.length(); ++j) {
               if(str[j] < str[ind] && str[j] > str[i]) {
                    ind = j;
               }
          }
          swap(str[i], str[ind]);
          for(int j = i+1; j < str.length()-1; ++j) {
               for(int l = j+1; l < str.length(); ++l) {
                    if(str[j] > str[l]) {
                         swap(str[j], str[l]);
                    }
               }
          }
          cout << str << " ";
          if(check(str)) backTracking(str.length()-2, str);
     }
}

int main() {
     int t;
     cin >> t;
     while(t--) {
          string str;
          cin >> str;
          cout << str << " ";
          backTracking(str.length()-2, str);
          cout << endl;
     }
}