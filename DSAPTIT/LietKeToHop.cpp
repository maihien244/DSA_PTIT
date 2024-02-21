#include <iostream>
#include <set>

using namespace std;

int check(int x[], int n, int k) {
    for(int i = 1; i <= k; ++i) {
        if(x[i] != n-k+i) {
            return 0;
        }
    }
    return 1;
}

void print(int x[], int a[], int k) {
    for(int i = 1; i <= k; ++i) {
        cout << x[a[i]] << " ";
    }
    cout << endl;
}

int main() {
    int n, k;
    cin >> n >> k;
    set<int> inp;
    int tmp;
    for(int i = 0; i < n; ++i) {
        cin >> tmp;
        inp.insert(tmp);
    }
    n = 0;
    int x[inp.size()+1], a[inp.size()+1];
    for(set<int>::iterator it = inp.begin(); it != inp.end(); ++it) {
        x[n+1] = *it;
        a[n+1] = n+1;
        ++n;
    }
    print(x, a, k);
    while(!check(a, n, k)) {
        int i = k;
        while(i > 0 && a[i] == n-k+i) {
            i--;
        }
        if(i > 0) {
            a[i]++;
            for(int j = i+1; j <= k; ++j) {
                a[j] = a[i]+j-i;
            }
        }
        print(x, a, k);
    }
}