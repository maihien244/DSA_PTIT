#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int x[n];
        int tmp = 100000;
        for(int i = 0; i < n; ++i) {
            cin >> x[i];
        }
        for(int i = 0; i < n-1; ++i) {
            for(int j = i+1; j < n; ++j) {
                if(abs(tmp) > abs(x[i]+x[j])) {
                    tmp = x[i]+x[j];
                }
            }
        }
        cout << tmp << endl;
    }
}