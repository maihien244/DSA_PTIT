#include <iostream>

using namespace std;

int a[10][10];
int check = -1;

void diChuyen(int n, int i, int j, string str) {
    if(!a[0][0] || !a[n-1][n-1]) {
        cout << -1 ;
    }
    else {
        if(i < n-1 || j < n-1) {
            if(a[i+1][j]) {
                str += 'D';
                diChuyen(n, i+1, j, str);
                str.erase(str.length()-1, 1);
            }
            if(a[i][j+1]) {
                str += 'R';
                diChuyen(n, i, j+1, str);
                str.erase(str.length()-1, 1);
            }
        }
        if(i == n-1 && j == n-1) {
            cout << str << " ";
            check = 1;
        }
        if(i == 0 && j == 0 && check != 1) {
            cout << -1;
        }
    }
    
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j) {
                cin >> a[i][j];
            }
        }
        diChuyen(n, 0, 0, "");
        cout << endl;
    }
}