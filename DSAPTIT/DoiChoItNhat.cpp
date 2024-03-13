#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        int cnt = 0;
        for(int i =0; i < n; ++i) {
            cin >> a[i];
        }
        for(int i = 0; i < n; ++i) {
            int ind = i;
            for(int j = i; j < n; ++j) {
                if(a[ind] > a[j]) {
                    ind = j;
                }
            }
            if(ind != i) {
                swap(a[ind], a[i]);
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}