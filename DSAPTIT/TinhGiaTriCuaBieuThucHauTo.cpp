#include <bits/stdc++.h>

using namespace std;
int phepTinh(int a, int b, char c) {
    if(c == '+') return a+b;
    if(c == '-') return a-b;
    if(c == '*') return a*b;
    if(c == '/') return a/b;
}

void tinh(string str) {
    stack<int> st;
    for(int i = 0; i < str.length(); ++i) {
        if(str[i] >= '0' && str[i] <= '9') st.push(str[i]-'0');
        else {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            st.push(phepTinh(b, a, str[i]));
        }
    }
    cout << st.top() << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        string str;
        cin >> str;
        tinh(str);
    }
}