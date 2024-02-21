#include <iostream>
#include <algorithm>

using namespace std;

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int check(int x[], int n) {
    for(int i = 0; i < n-1; ++i) {
        if(x[i] < x[i+1]) {
            return 0;
        }
    }
    return 1;
}

void print(int x[], int n) {
    for(int i = 0; i < n; ++i) {
        cout << x[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int x[n];
    for(int i = 0; i < n; ++i) {
        cin >> x[i];
    }
    sort(x, x+n);
    print(x, n);
    while(!check(x, n)) {
        int i = n-2;
        while(i >= 0 && x[i] > x[i+1]) {
            i--;
        }
        if(i >= 0) {
            int ind_ms = i+1;
            for(int j = i+1; j < n; ++j) {
                if(x[j] > x[i] && x[j] < x[ind_ms]) {
                    ind_ms = j;
                }
            }
            swap(x[i], x[ind_ms]);
            for(int j = i+1; j < n-1; ++j) {
                for(int l = j+1; l < n; ++l) {
                    if(x[j] > x[l]) {
                        swap(x[j], x[l]);
                    }
                }
            }
        }
        print(x, n);
    }
}