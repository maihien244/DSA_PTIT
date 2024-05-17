#include <bits/stdc++.h>

using namespace std;
struct Job {
    int a, b, c;
};

bool cmp(Job a, Job b) {
    return a.c > b.c;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<Job> x(n);
        int check[1001] = {};
        for(int i = 0; i < n; ++i) cin >> x[i].a >> x[i].b >> x[i].c;
        sort(x.begin(), x.end(), cmp);
        long long res = 0;
        int cnt = 0;
        for(int i = 0; i < n; ++i) {
            for(int j = x[i].b; j > 0; j--) {
                if(!check[j]) {
                    res += x[i].c;
                    cnt++;
                    check[j] = 1;
                    break;
                }
            }
        }
        cout << cnt << " " << res << endl;
    }
}