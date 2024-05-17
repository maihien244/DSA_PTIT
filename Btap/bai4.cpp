#include <bits/stdc++.h>

using namespace std;
int check(vector<int> tam) {
    int cnt = 0;
    for(int i = 0; i < tam.size(); ++i) {
        if(tam[i] == 2) cnt++;
    }
    if((double)cnt/tam.size() > 0.5) return 1;
    return 0;
}

int chuuyenSangTam(int n) {
    vector<int> tam;
    while(n) {
        tam.push_back(n%3);
        n /= 3;
    }
    if(check(tam)) {
        for(int i = tam.size()-1; i >= 0; --i) cout << tam[i];
        cout << " ";
        return 1;
    }
    return 0;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int i = 0;
        while(n) {
            if(chuuyenSangTam(i)) {
                n--;
            }
            i++;
        }
        cout << endl;
    }
}