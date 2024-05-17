#include <bits/stdc++.h>

using namespace std;

void TowerOfHanoi(int numberOfDisks, char sourcePeg, char auxiliaryPeg, char targetPeg) {
    if (numberOfDisks == 1) {
        cout << sourcePeg << " -> " << targetPeg << endl;
        return;
    }

    TowerOfHanoi(numberOfDisks - 1, sourcePeg, targetPeg, auxiliaryPeg);

    cout << sourcePeg << " -> " << targetPeg << endl;

    TowerOfHanoi(numberOfDisks - 1, auxiliaryPeg, sourcePeg, targetPeg);
}

int main() {
     int n; cin >> n;
     TowerOfHanoi(n, 'A', 'B', 'C');
}