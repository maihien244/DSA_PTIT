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

void print(int x[], string str[], int n) {
    for(int i = 1; i <= n; ++i) {
        cout << str[x[i]] ;
    }
    cout << endl;
}

int main() {
    int n, k;
    int cnt = 1;
    cin >> n >> k;
    int x[n+1];
    for(int i = 1; i <= n; ++i) {
        x[i] = i; //O(n)
    }
    if(k == 1) {
        print(x, n);
    }
    while(!check(x, n)) {
        ++cnt;
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
        if(cnt%k == 0) {
            print(x, n);
        }
    }
}