#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int &a, int &b) {
    return a > b;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int x[n];
        for(int i = 0; i < n; ++i) {
            cin >> x[i];
        }
        sort(x, x+n, cmp);;
        int tmp = x[0];
        k--;
        cout << x[0] << " ";
        for(int i = 1; i < n; ++i) {
            if(!k) break;
            if(x[i] != tmp) {
                cout << x[i] << " ";
                k--;
            }
        }
        cout << endl;
    }
}