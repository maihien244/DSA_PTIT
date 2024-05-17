#include <bits/stdc++.h>

using namespace std;
bool cmp(pair<char, int> a, pair<char, int> b) {
    return a.second < b.second;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int d;
        string str;
        cin >> d >> str;
        map<char, int> ch;
        vector<pair<char, int>> kt;
        int length = str.length();
        vector<char> result(length);
        for(int i = 0; i < length; ++i) {
            ch[str[i]]++;
        }
        for(auto x: ch) {
            pair<char, int> tmp;
            tmp.first = x.first;
            tmp.second = x.second;
            kt.push_back(tmp);
        }
        sort(kt.begin(), kt.end(), cmp);
        if(kt[kt.size()-1].second*d -(d-1) > length) {
            cout << -1 << endl;
        } else {
            cout << 1 << endl;
        }
    }
}