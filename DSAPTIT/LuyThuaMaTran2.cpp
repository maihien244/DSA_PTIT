#include <bits/stdc++.h>

using namespace std;
long long mod = 1e9 + 7;
int n, k;

void nhanMaTran(long long a[][10], long long b[][10]) {
    long long tmp[n][n];
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            tmp[i][j] = 0;
            for(int k = 0; k < n; ++k) tmp[i][j] += a[i][k] *b[k][j]%mod;
        }
    }
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            a[i][j] = tmp[i][j];
        }
    }
}

void nhanMaT(long long a[][10], long long k) 
{
    if(k%2) {
        long long tmp[n][n];
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j) {
                tmp[i][j] = a[i][j];
            }
        }
        nhanMaT(a,k-1);
        nhanMaTran(tmp, a);
    } else {
        nhanMaTran(a, a);
    }

}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n >> k;
        long long a[n][n];
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j) {
                cin >> a[i][j];
            }
        }
        nhanMaT(a, k);
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}