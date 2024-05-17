#include <bits/stdc++.h>

using namespace std;
long long gcd(long long a, long long b) {
    if(b == 0) return a;
    return gcd(b, a%b);
}

void rutgon(long long &a, long long &b) {
    long long tmp = gcd(a, b);
    a /= tmp;
    b /= tmp;
}

int main() {
    int t; cin >> t;
    while(t--) {
        long long a, b;
        cin >> a >> b;
        rutgon(a, b);
        long long i = 2;
        while(a) {
            if(a == 1) {
                cout << 1 << "/"<< b << endl;
                break;
            }
            if(a*i - b > 0) {
                cout << 1 <<"/" << i << " + ";
                a = a*i - b;
                b *= i;
                rutgon(a, b);
            }
            i++;
        }
    }
}