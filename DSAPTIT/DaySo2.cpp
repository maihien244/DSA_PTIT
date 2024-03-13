#include <iostream>

using namespace std;

void xayTamGiac(int a[], int n) {
    if(n > 1) {
        int b[n-1];
        for(int i = 0; i < n-1; ++i) {
            b[i] = a[i]+a[i+1];
        }
        xayTamGiac(b, n-1);
        cout <<"[";
        for(int i = 0; i < n; ++i) {
            if(i != n-1) {
                cout << a[i] << " ";
            }
            else {
                cout << a[i] << "] ";
            }
        }
    }
    else {
        cout << "[" << a[0] << "] ";
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int x[n];
        for(int i = 0; i < n; ++i) {
            cin >> x[i];
        }
        xayTamGiac(x, n);
        cout << endl;
    }
}