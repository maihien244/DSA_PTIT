#include <bits/stdc++.h>

using namespace std;
int length;

int check(string str) {
     for(int i = 0; i < length-1; ++i) {
          if(str[i] < str[i+1]) return 0;
     }
     return 1;
}

int check1(string str) {
     for(int i = 1; i < length-1; ++i) {
          if(str[i] == 'A' || str[i] == 'E') {
               if(str[i-1] != 'A' && str[i-1] != 'E' && str[i+1] != 'A' && str[i+1] != 'E') {
                    return 0;
               }
          }
     }
     return 1;
}
void swap(char &a, char &b) {
     char tmp = a;
     a = b;
     b = tmp;
}

void printStr(char str[]) {
     for(int i = 0; i < length; ++i) cout << str[i];
     cout << endl;
}

void Try(int i, char str[]) {
     // cout << 1 << endl;
     while(str[i] > str[i+1]) {
          i--;
          // cout << 2 << endl;
     }
     if(i >= 0) {
          // cout << 3 << endl;
          int ind = i+1;
          for(int j = i+1; j < length; ++j) {
               if(str[j] > str[i] && str[j] < str[ind]) {
                    ind = j;
               }
          }
          swap(str[i], str[ind]);
          for(int j = i+1; j < length-1; ++j) {
               for(int l = j+1; l < length; ++l) {
                    if(str[j] > str[l]) {
                         swap(str[j], str[l]);
                    }
               }
          }
          if(check1(str)) printStr(str);
          if(!check(str)) Try(length-2, str);
     }
}

int main() {
     char c; cin >> c;
     length = c-'A'+1;
     char str[length];
     for(char i = 'A'; i <= c; ++i) {
          str[i-'A'] = i;
     }
     if(check1(str)) printStr(str);
     Try(length-2, str);
}