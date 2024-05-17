#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a, a+n);
        int n1 = n/2;
        string str1 = "", str2 = "";
        int in = 0;
        while(in < int(n/2)*2) {
            str1 += to_string(a[in]);
            in++;
            str2 += to_string(a[in]);
            in++;
        }
        if(n%2) {
            str1 += to_string(a[in]);
        }
        stringstream ss(str1);
        long long so1, so2;
        ss >> so1;
        stringstream s1(str2);
        s1 >> so2;
        cout << so1 + so2 << endl;
    }
}