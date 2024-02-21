#include <iostream>
#include <map>
#include <queue>

using namespace std;

int arr[100][100];
int n;

void BFS(int u) {
    map<int, int> xetDinh;
    queue<int> dinh;
    dinh.push(u);
    xetDinh[u] = 1;
    while(!dinh.empty()) {
        int tmp = dinh.front();
        cout << dinh.front();
        dinh.pop();
        for(int i = 1; i <= n; ++i) {
            if(!xetDinh[i] && arr[tmp][i]) {
                dinh.push(i);
                xetDinh[i] = 1;
            }
        }
    }
}

int main() {
    n = 4;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; j++) {
            cin >> arr[i][j];
        }
    }
    BFS(1);
}