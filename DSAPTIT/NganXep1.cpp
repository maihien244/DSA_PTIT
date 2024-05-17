#include <bits/stdc++.h>

using namespace std;
void thucHien(string str, vector<int> &st) {
    if(str[0] == 'p') {
        stringstream ss(str);
        string lenh;
        int tmp;
        ss >> lenh;
        ss >> tmp;
        if(lenh == "push") {
            st.push_back(tmp);
        } else {
            if(st.empty()) {
                cout <<"empty" << endl;
            } else {
                st.pop_back();
            }
        }
    } else {
        if(st.empty()) {
            cout <<"empty" << endl;
        } else {
            for(auto &x: st) cout << x << " ";
            cout << endl;
        }
    }
}

int main() {
    vector<int> st;
    string str;
    while(getline(cin, str)) {
        thucHien(str, st);
    }
}