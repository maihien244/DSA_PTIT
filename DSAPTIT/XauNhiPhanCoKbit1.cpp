#include <iostream>

using namespace std;

int check(int x[], int n) {
    for(int i = 1; i <= n; ++i) {
        if(x[i] != 1) {
            return 0;
        }
    }
    return 1;
}

int cnt1(int x[], int n, int k) {
    for(int i = 1; i <= n; ++i) {
        if(x[i]) {
            k--;
        }
    }
    if(k == 0) {
        return 1;
    }
    return 0;
}

void print(int x[], int n) {
    for(int i = 1; i <= n; ++i) {
        cout << x[i];
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int x[n+1];
        for(int i = 1; i <= n; ++i) {
            x[i] = 0;
        }
        while(!check(x, n)) {
            int i = n;
            while(i > 0 && x[i] == 1) {
                i--;
            }
            if(i > 0) {
                x[i]++;
                for(int j = i+1; j <= n; ++j) {
                    x[j] = 0;
                }
            }
            if(cnt1(x, n, k)) {
                print(x, n);
            }
        }
    }
}