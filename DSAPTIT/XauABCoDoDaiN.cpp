#include <iostream>

using namespace std;

int check(int x[], int n) {
    for(int i = 1; i <= n; ++i) {
        if(x[i] != 2) {
            return 0;
        }
    }
    return 1;
}

void print(int x[], int n) {
    for(int i = 1; i <= n; ++i) {
        if(x[i] == 1) {
            cout << 'A';
        }
        else {
            cout << 'B';
        }
    }
    cout << " ";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int x[n+1];
        for(int i = 1; i <= n; ++i) {
            x[i] = 1;
        }
        print(x, n);
        while(!check(x, n)) {
            int i = n;
            while(i > 0 && x[i] == 2) {
                i--;
            }
            if(i > 0) {
                x[i]++;
                for(int j = i+1; j <= n; ++j) {
                    x[j] = 1;
                }
            }
            print(x, n);
        }
        cout << endl;
    }
}