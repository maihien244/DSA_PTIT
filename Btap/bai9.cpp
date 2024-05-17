#include <bits/stdc++.h>

using namespace std;

int main() {
    multiset<int> n;
    for(int i = 0; i < 4; ++i) n.insert(1);
    for(auto x: n) cout << x << " ";
    cout << endl;
    n.erase(n.begin());
    for(auto x: n) cout << x << " ";
    cout << endl;
}