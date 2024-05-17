#include <bits/stdc++.h>

using namespace std;
int Priority(char c) {
    if(c == '+' || c == '-') return 1;    
    if(c == '*' || c == '/') return 2;    
    if(c == '^' || c == '%') return 3;
    return 0;
}

void trungTo_hauTo(string str) {
    string out = "";
    stack<char> st;
    for(int i = 0; i < str.length(); ++i) {
        if(str[i] == '(') st.push(str[i]);
        else if(isalnum(str[i])) out += str[i];
        else if(str[i] == ')') {
            while(!st.empty() && st.top() != '(') {
                out += st.top();
                st.pop();
            }
            st.pop();
        }
        else {
            while(!st.empty() && Priority(str[i]) <= Priority(st.top())) {
                out += st.top();
                st.pop();
            }
            st.push(str[i]);
        }
    }
    while(!st.empty()) {
        if( st.top() == '(') st.pop();
        else {
            out += st.top();
            st.pop();
        }
    }
    cout << out << endl;
}


int main() {
    int t; cin >> t;
    while(t--) {
        string str; cin >> str;
        trungTo_hauTo(str);
    }
}