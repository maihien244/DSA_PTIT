#include <iostream>
#include <map>

using namespace std;


int main() {
    string str;
    cin >> str;
    int cnt = 0;
    for(int i = 0; i < str.length()-2; ++i) {
        for(int j = i+2; j < str.length(); ++j) {
            if(str[i] == str[j]) {
                map<char, int> mp1, mp2;
                for(int l = i+1; l < j; ++l) {
                    mp1[str[l]]++;
                }
                for(int l = j+1; l < str.length(); ++l) {
                    mp2[str[l]]++;
                } 
                for(auto x: mp1) {
                    cnt += x.second * mp2[x.first];
                }
            }
        }
    }
    cout << cnt ;
}