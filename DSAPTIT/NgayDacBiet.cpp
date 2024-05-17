#include <bits/stdc++.h>

using namespace std;
string str = "2000";
vector<string> ans;

void Try(int i) {
     if(i <= 3) {
          for(int j = 0; j <= 2; j += 2) {
               str[i] = j +'0';
               Try(i+1);
               if(i == 3) {
                    ans.push_back(str);
               }
          }
     }
}

int main() {
     Try(1);
     vector<string> day;
     day.push_back("02");
     day.push_back("20");
     day.push_back("22");
     for(string &i: day) {
          for(string &j : ans) {
               cout << i << "/02/" << j << endl;
          }
     }
}