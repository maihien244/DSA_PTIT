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

void print(int x[], int k) {
    for(int i = 1; i <= k; ++i) {
        cout << (char)(x[i]+64);
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int x[k+1];
        for(int i = 1; i <= k; ++i) {
            x[i] = i;
        }
        print(x, k);
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
            print(x, k);
        }
    }
}