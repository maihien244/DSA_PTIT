#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string str;
        cin >> str;
        int nho = 0, to = 0, bang = 0;
        for(int i = 1; i < str.length(); ++i) {
            if(str[i] > str[i-1]) {
                ++to;
            }
            if(str[i] < str[i-1]) {
                ++nho;
            }
            if(str[i] == str[i-1]) {
                ++bang;
            }
        }
        if(to+bang == str.length()-1 || nho+bang == str.length()-1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}