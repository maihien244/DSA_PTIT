#include <bits/stdc++.h>

using namespace std;
bool cmp(pair<char, int> a, pair<char, int> b) {
    return a.second > b.second;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int k; cin >> k;
        string str; cin >> str;
        map<char, int> phanTu;
        for(int i = 0; i < str.length(); ++i) {
            phanTu[str[i]]++;
        }
        vector<pair<char, int>> result;
        for(auto x: phanTu) {
            result.push_back(x);
        }
        sort(result.begin(), result.end(), cmp);
        while(k != 0) {
            result[0].second--;
            sort(result.begin(), result.end(), cmp);
            k--;
        }
        long long sum = 0;
        for(int i = 0; i < result.size(); ++i) {
            sum += result[i].second*result[i].second;
        }
        cout << sum << endl;
    }
}