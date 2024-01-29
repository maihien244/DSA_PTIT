#include <iostream>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;
    for(int index = 1; index <= t; ++index) {
        int n;
        cin >> n;
        map<int, int> out;
        int i = 2;
        while(n != 1) {
            int cnt = 0;
            while(n%i == 0) {
                ++cnt;
                n /= i;
            } 
            out[i] = cnt;
            if(i == 2) {
                i = 3;
            }
            else {
                i += 2;
            }
        }
        cout << "Test " << index << ": ";
        for(auto x: out) {
            cout << x.first << "(" << x.second <<") ";
        }
        cout << endl;
    }
}