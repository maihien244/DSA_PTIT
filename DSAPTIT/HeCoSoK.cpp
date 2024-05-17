#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int k;
        string a, b;
        stack<int> kq;
        cin >> k >> a >> b;
        string lon, be;
        if(a.length() >= b.length()) {
            lon = a;
            be = b;
        } else {
            lon = b;
            be = a;
        }
        int luu = 0;
        int j = 0;
        for(int i = be.length()-1; i >= 0; --i) {
            int tmp = be[i]-'0'+lon[b.length()-1-j]-'0' + luu;
            j++;
            if(tmp >= k) {
                kq.push(tmp%k);
                luu = tmp/k;
            } else {
                kq.push(tmp);
                luu = 0;
            }
        }
        for(int i = lon.length()-be.length()-1; i >= 0; --i) {
            if(luu) {
                int tmp = lon[i]-'0'+luu;
                if(tmp >= k) {
                    kq.push(tmp%k);
                    luu = tmp/k;
                } else {
                    kq.push(tmp);
                    luu = 0;
                }
            } else {
                kq.push(lon[i]-'0');
            }
        }
        if(luu) kq.push(luu);
        while(!kq.empty()) {
            cout << kq.top();
            kq.pop();
        }
        cout << endl;
    }
}