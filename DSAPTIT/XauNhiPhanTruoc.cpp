#include <iostream>

using namespace std;

int check(string str) {
    for(int i = 0; i < str.length(); ++i) {
        if(str[i] != '0') {
            return 0;
        }
    }
    return 1;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string str;
        cin >> str;
        if(check(str)) {
            for(int i = 0; i < str.length(); ++i) {
                cout << '1';
            }
            cout << endl;
        }
        else {
            int i = str.length()-1;
            while(i >= 0 && str[i] == '0') {
                i--;
            }
            if(i >= 0) {
                str[i] = '0';
                for(int j = i+1; j < str.length(); ++j) {
                    str[j] = '1';
                }
            }
            cout << str << endl;
        }
    }
}