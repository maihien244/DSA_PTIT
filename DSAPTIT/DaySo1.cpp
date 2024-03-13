#include <iostream>

using namespace std;

void xayTamGiac(int a[], int n) {
    if(n > 0) {
        cout << "[";
        for(int i = 0; i < n; ++i) {
            if(i != n-1) {
                cout << a[i] << " ";
            }
            else {
                cout << a[i] << "]";
            }
            a[i] += a[i+1];
        }
        cout << endl;
        xayTamGiac(a, n-1);
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        xayTamGiac(a, n);
    }
}