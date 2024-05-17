#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string str; cin >> str;
        map<char, int> ch;
        for(int i = 0; i < str.length(); ++i) {
            ch[str[i]]++;
        }

        int max = 0;
        for(auto x: ch) {
            if(x.second > max) max = x.second;
        }

        if(max*2 - 1 > str.length()) {
            cout << -1 << endl;
        } else {
            cout << 1 << endl;
        }
    }
}