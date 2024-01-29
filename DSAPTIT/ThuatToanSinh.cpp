#include <iostream>

using namespace std;

// int checkTN(int arr[], int n) {
//     int tmp =(n%2) ? (n/2+1) : n/2;
//     for(int i = 0; i < tmp; ++i) {
//         if(arr[i] != arr[n-1-i]) {
//             return 0;
//         }
//     }
//     return 1;
// }

// void quayLui(int i, int arr[], int n) {
//     if(i < n) {
//         for(int j = 0; j <= 1; ++j) {
//             arr[i] = j;
//             quayLui(i+1, arr, n);
//         }
//     }
//     else {
//         if(checkTN(arr, n)) {
//             for(int j = 0; j < n; ++j) {
//                 cout << arr[j] << " ";
//             }
//             cout << endl;
//         }
//     }
// }

int check(int arr[], int n) {
    for(int i = 0; i < n; ++i) {
        if(!arr[i]) {
            return 0;
        }
    }
    return 1;
}

int checkTN(int arr[], int n) {
    for(int i = 0; i < n; ++i) {
        if(arr[i] != arr[n-1-i]) {
            return 0;
        }
    }
    return 1;
}

void sinhKeTiep(int arr[], int n) {
    int i = n-1;
    while(i >= 0 && arr[i]) {
        arr[i] = 0;
        i--;
    }
    if(i >= 0) {
        arr[i] = 1;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; ++i) {
        arr[i] = 0;
        cout << arr[i] << " ";
    }
    cout << endl;
    while(!check(arr, n)) {
        sinhKeTiep(arr, n);
        if(checkTN(arr, n)) {
            for(int i = 0; i < n; ++i) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}