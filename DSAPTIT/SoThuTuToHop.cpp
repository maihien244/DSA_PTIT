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

int check2(int x[], int a[], int k) {
    for(int i = 1; i <= k; ++i) {
        if(x[i] != a[i]) {
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
        cin >> n >> k;
        int x[k+1], a[k+1];
        for(int i = 1; i <= k; ++i) {
            cin >> a[i];
            x[i] = i;
        }
        if(check2(x, a, k)) {
            cout << 1 << endl;
        }
        else {
            int cnt = 1;
            while(!check(x, n, k)) {
                int i = k;
                while(i > 0 && x[i] == n-k+i) {
                    i--;
                }
                if(i > 0) {
                    x[i]++;
                    for(int j = i+1; j <= k; ++j) {
                        x[j] = x[i]+j-i;
                    }
                }
                ++cnt;
                if(check2(x, a, k)) {
                    cout << cnt << endl;
                    break;
                }
            }
        }

    }
}