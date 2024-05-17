#include <bits/stdc++.h>

using namespace std;
int n;
vector<string> str;
vector<int> ind;
map<int, int> checkPos;
int minLength;

void demLap() {
    int cnt = 0;
    for(int i = 0; i < n-1; ++i) {
        int ind_pr = ind[i];
        int ind_ne = ind[i+1];
        for(int j = 0; j < str[ind_pr].length(); ++j) {
            if(str[ind_ne][0] <= str[ind_pr][j] && str[ind_ne][str[ind_ne].length()-1] >= str[ind_pr][j]) cnt++;
        }
    }
    if(cnt < minLength) minLength = cnt;
}

// void Try(int i) {
//     for(int j = 0; j < n; ++j) {
//         if(!checkPos[j]) {
//             ind[i] = j;
//             checkPos[j] = 1;
//             if(i != n-1) Try(i+1);
//             else {
//                 demLap();
//             }
//             checkPos[j] = 0;
//         }
//     }
// }

int check() {
    for(int i = 0; i < n-1; ++i) {
        if(ind[i] < ind[i+1]) return 0;
    }
    return 1;
}

void print() {
    for(int i = 0; i < n; ++i) {
        cout << ind[i] << " ";
    }
    cout << endl;
}

int main() {
    cin >> n;
    str.resize(n);
    ind.resize(n);
    minLength = 1e9;
    for(int i = 0; i < n; ++i) {
        cin >> str[i];
        ind[i] = i;
    }
    while(!check()) {
        int i = n-2;
        while(ind[i] > ind[i+1] && i >= 0) {
            i--;
        }
        if(i >= 0) {
            int index = i+1;
            for(int j = i+1; j < n; ++j) {
                if(ind[j] > ind[i] && ind[j] < ind[index]) index = j;
            }
            swap(ind[index], ind[i]);
            sort(ind.begin()+i+1, ind.end());
            demLap();
        }
    }
    cout << minLength << endl;
}