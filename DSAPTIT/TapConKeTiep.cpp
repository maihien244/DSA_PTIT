#include <iostream>

using namespace std;

int check(int x[], int n, int k) {
    for(int i = 1; i <= k; ++i) {
        if(x[i] != n-k+i) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n>> k;
        int a[k+1];
        for(int i = 1; i <= k; ++i) {
            cin >> a[i];
        }
        if(check(a, n, k)) {
            for(int i = 1; i <=k; ++i) {
                cout << n-k+i << " ";
            }
            cout << endl;
        }
        else {
            int i = k;
            while(i > 0 && a[i] == n-k+i) {
                i--;
            }
            if(i > 0) {
                a[i]++;
                for(int j = i+1; j <= k; ++j) {
                    a[j] = a[i]+j-i;
                }
            }
            for(int i = 1; i <= k; ++i) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
}