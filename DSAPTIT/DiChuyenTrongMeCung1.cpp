#include <bits/stdc++.h>

using namespace std;
int n;
int a[10][10];
int check[10][10];
vector<string> ans;

void Try(int i, int j, string str) {
    if(!a[0][0] || !a[n-1][n-1]) return;
    if(i == n-1 && j == n-1) {
        ans.push_back(str);
        return ;
    }
    if(a[i+1][j] && i != n-1 && !check[i+1][j]) {
        check[i][j] = 1;
        Try(i+1, j, str+'D');
        check[i][j] = 0;
    }
    if(a[i][j-1] && j != 0 && !check[i][j-1]) {
        check[i][j] = 1;
        Try(i, j-1, str+'L');
        check[i][j] = 0;
    }
    if(a[i][j+1] && j != n-1 && !check[i][j+1]) {
        check[i][j] = 1;
        Try(i, j+1, str+'R');
        check[i][j] = 0;
    }
    if(a[i-1][j] && i != 0 && !check[i-1][j]) {
        check[i][j] = 1;
        Try(i-1, j, str+'U');
        check[i][j] = 0;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        cin >> n;
        ans.clear();
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j) {
                cin >> a[i][j];
                check[i][j] = 0;;
            }
        }
        Try(0, 0, "");
        if(ans.empty()) {
            cout << -1 << endl;
        } else {
            for(string &i: ans) cout << i << " ";
            cout << endl;
        }
    }
}