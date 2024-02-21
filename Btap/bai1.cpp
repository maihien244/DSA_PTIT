#include <iostream>
#include <map>
#include <stack>

using namespace std;

int arr[100][100];
int n;

void DFS(int u) {
	map<int, int> xetDinh;
	stack<int> dinh;
	dinh.push(u);
	cout << u << " ";
	xetDinh[u] = 1;
	while(!dinh.empty()) {
		int tmp = dinh.top();
		dinh.pop();
		for(int i = 1; i <= n; ++i) {
			if(!xetDinh[i] && arr[tmp][i]) {
				dinh.push(tmp);
				dinh.push(i);
				cout << i << " ";
				xetDinh[i] = 1;
				break;
			}
		}
	}
}

int main() {
	n = 4;
	for(int i = 1; i <= 4; ++i) {
		for(int j = 1; j <= 4; ++j) {
			cin >> arr[i][j];
		}
	}
	DFS(1);
}