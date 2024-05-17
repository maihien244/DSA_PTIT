#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b) {
    return abs(a) > abs(b);
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a, a+n);
    int x = a[0]*a[1];
    int b = a[n-1]*a[n-2];
    int c = b*a[n-3];
    int d = x*a[n-1];
    cout << max(x, max(b, max(c, d))) << endl;
}