#include <iostream>

using namespace std;

int check(int x[], int n) {
    for(int i = 1; i <= n; i++) {
        if(x[i] != 8) {
            return 0;
        }
    }
    return 1;
}

int check2(int x[], int n) {
    if(x[1] != 8 || x[n] != 6) {
        return 0;
    }
    for(int i = 1; i < n; ++i) {
        if(x[i] == 8 && x[i+1] == 8) {
            return 0;
        }
    }
    for(int i = 1; i <= n-3; ++i) {
        if(x[i] == 6) {
            int cnt = 0;
            for(int j = i; j <= i+3; ++j) {
                if(x[j] == 6) {
                    ++cnt;
                }
                else {
                    break;
                }
            }
            if(cnt == 4) {
                return 0;
            }
        }
    }
    return 1;
}

void print(int x[], int n) {
    for(int i = 1; i <= n; ++i) {
        cout << x[i];
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int x[n+1];
    for(int i = 1; i <= n; ++i) {
        x[i] = 6;
    }
    while(!check(x, n)) {
        int i = n;
        while(i > 0 && x[i] == 8) {
            --i;
        }
        if(i > 0) {
            x[i] = 8;
            for(int j = i+1; j <= n; ++j) {
                x[j] = 6;
            }
        }
        if(check2(x, n)) {
            print(x, n);
        }
    }
}
