#include <iostream>

using namespace std;

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
        int kt = 0;
        for(int i = 0; i <n-1; ++i) {
            for(int j = i+1; j < n; ++j) {
                if(x[i] == x[j]) { 
                    cout << x[i] << endl;
                    kt = 1;
                }
            }
        }
        if(!kt) {
            cout << "NO" << endl;
        }
    }
}