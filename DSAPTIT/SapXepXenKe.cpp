#include <iostream>
#include <algorithm>


using namespace std;


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
        sort(a, a+n);
        int pos;
        if(n%2) {
            for(int i = 0; i < n/2; ++i) {
                cout << a[n-1-i] << " " << a[i] << " ";
            }
            cout << a[n/2] << endl;
        }
        else {
            for(int i = 0; i < n/2; ++i) {
                cout << a[n-1-i] << " " << a[i] << " ";
            }
            cout << endl;
        }


    }
}
