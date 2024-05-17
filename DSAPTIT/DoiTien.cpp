#include <bits/stdc++.h>

using namespace std;
bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int t; cin >> t;
    int a[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    sort(a, a+10, cmp);
    while(t--) {
        int n; cin >> n;
        int cnt = 0;
        int i = 0;
        while(n > 0) {
            if(n >= a[i]) {
                cnt += n/a[i];
                n -= int(n/a[i])*a[i];
            }
            i++;
        }
        cout << cnt << endl;
    }
    
}