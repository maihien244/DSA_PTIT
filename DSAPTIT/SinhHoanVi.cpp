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

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void print(int x[], int n) {
    for(int i = 1; i <= n; ++i) {
        cout << x[i];
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
            x[i] = i; //O(n)
        }
        print(x, n);
        while(!check(x, n)) {
            int i = n-1;
            while(i > 0 && x[i] > x[i+1]) {
                i--;
            }
            int ind = i+1;
            for(int j = i+1; j <= n; ++j) {
                if(x[j] < x[ind] && x[j] > x[i]) {
                    ind = j; //O(n)
                }
            }
            swap(x[i], x[ind]); //0(1)
            for(int j = i+1; j < n; ++j) {
                for(int l = j+1; l <= n; ++l) {
                    if(x[j] > x[l]) {
                        swap(x[j], x[l]);
                    }
                }
            }
            print(x, n);
        }
        cout << endl;
    }
}