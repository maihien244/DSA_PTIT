#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string str;
        cin >> str;
        int n = str.length();
        int arr[n];
        for(int i = 0; i < n; ++i) {
            arr[i] = str[i] - '0';
        }
        int cnt = 1;
        for(int i = n-1; i >= 0; i--) {
            if(arr[i] + cnt == 2) {
                arr[i] = 0;
                cnt = 1;
            }
            else {
                arr[i] += cnt;
                cnt = 0;
            }
        }
        for(int i = 0; i < n; ++i) {
            cout << arr[i];
        }
        cout << endl;
    }
}