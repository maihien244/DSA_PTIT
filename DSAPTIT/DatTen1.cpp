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

void print(string str[], int x[], int k) {
    for(int i = 1; i <= k; ++i) {
        cout << str[x[i]] << " ";
    }
    cout << endl;
}

void print2(int x[], int k) {
    for(int i = 1; i <= k; ++i) {
        cout << x[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, k;
    cin >> n >> k;
    set<string> st;
    string str[n+1];
    int x[k+1];
    string tmp;
    for(int i = 0; i < n; ++i) {
        cin >> tmp;
        st.insert(tmp);
    }
    // for(auto x: st) {
    //     cout << x << " ";
    // }
    // cout << endl;
    int i = 1;
    for(auto x1: st) {
        str[i] = x1;
        ++i;
    }
    for(i = 1; i <= k; ++i) {
        x[i] = i;
    }
    print(str, x, k);
    n = st.size();
    while(!check(x, n, k)) {
        i = k;
        while(i > 0 && x[i] == n-k+i) {
            i--;
        }
        if(i > 0) {
            x[i]++;
            for(int j = i+1; j <= k; ++j) {
                x[j] = x[i]+j-i;
            }
        }
        print(str, x, k);
    }
}