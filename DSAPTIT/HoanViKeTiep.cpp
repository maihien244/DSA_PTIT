#include <iostream>

using namespace std;

int check(int x[], int n) {
    for(int i = 1; i <= n; ++i) {
        if(x[i] != n+1-i) {
            return 0;
        }
    }
    return 1;
}

void print(int x[], int n) {
    for(int i = 1; i <= n; ++i) {
        cout << x[i] << " ";
    }
    cout << endl;
}

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void sort(int x[], int n, int i) {
    for(int j = i+1; j < n; ++j) {
        for(int l = i+i; l <= n; ++l) {
            if(x[j] > x[l]) {
                swap(x[j], x[l]);
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int x[n+1];
        for(int i = 1; i <= n; ++i) {
            cin >> x[i];
        }
        if(check(x, n)) {
            for(int i = 1; i <=n; ++i) {
                cout << i << " ";
            }
            cout << endl;
        }
        else {
            int i = n-1;
            while(i > 0 && x[i] > x[i+1]) {
                i--;
            }
            int ind = i+1;
            for(int j = i+1; j <= n; ++j) {
                if(x[j] < x[ind] && x[j] > x[i]) {
                    ind = j;
                }
            }
            swap(x[i], x[ind]);
            sort(x, n, i);
            print(x, n);
        }
    }
}