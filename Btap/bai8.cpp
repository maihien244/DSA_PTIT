#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    getchar();
    while(t--) {
        string str;
        vector<string> str1;
        getline(cin, str);
        stringstream ss(str);
        string tmp;
        while(ss >> tmp) {
            int length = tmp.length();
            for(int i = 0; i < length; ++i) {
                if(tmp[i] < 'a') {
                    tmp[i] += 32;
                }
            }
            tmp[0] -= 32;
            str1.push_back(tmp);
        }
        tmp = "";
        for(int i = 1; i < str1.size()-1; ++i) {
            tmp += str1[i] + ' ';
        }
        tmp += str1[str1.size()-1] + ", " + str1[0];
        cout << tmp << endl;
    }
}