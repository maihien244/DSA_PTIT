#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int t;
    cin >> t;
    getchar();
    while(t--) {
        string str, str1 = "";
        getline(cin, str);
        stringstream ss(str);
        string tmp;
        while(ss >> tmp) {
            int length = tmp.length();
            for(int i = 0; i < length; ++i) {
                if(tmp[i] < 'a' || tmp[i] > 'z') {
                    tmp += 32;
                }
            }
            tmp[0] -= 32;
            str1 += tmp + ' ';
        }
        cout << str1 << endl;
    }
}