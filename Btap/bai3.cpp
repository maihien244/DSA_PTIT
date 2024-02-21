#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        string point = "YES";
        for(int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        for(int i = 0; i < n; ++i) {
            if(arr[i] != arr[n-1-i]) {
                point = "NO";
                break;
            }
        }
        cout << point << endl;
    }
}