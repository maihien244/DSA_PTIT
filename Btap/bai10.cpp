#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int cnt = 0;
        if(n%2) {
            cout << 0 << endl;
        }
        else {
            for(int i = 2; i <= n; i += 2) {
                if(n%i == 0) {
                    ++cnt;
                }
            }
            cout << cnt << endl;
        }
    }
}