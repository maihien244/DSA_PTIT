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

int check2(int x[], int n) {
    if(x[1] != 1 || x[n] != 0) {
        return 0;
    }
    for(int i = 1; i < n; ++i) {
        if(x[i] == 1 && x[i+1] == 1) {
            return 0;
        }
    }
    return 1;
}

void print(int x[], int n) {
    for(int i = 1; i <= n; ++i) {
        if(x[i] == 1) {
            cout << 'H';
        }
        else {
            cout << 'A';
        }
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int x[n+1];
        for(int i = 1; i <= n; ++i) {
            x[i] = 0;
        }
        while(!check(x, n)) {
            int i = n;
            while(i >= 1 && x[i] == 1) {
                i--;
            }
            if(i >= 1) {
                x[i]++;
                for(int j = i+1; j <= n; ++j) {
                    x[j] = 0;
                }
            }
            if(check2(x, n)) {
                print(x, n);
            }
        }
    }
}