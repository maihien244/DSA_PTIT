#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--)
    {
        string so;
        cin >> so;
        cout << ((so[0] != so[so.length()-1]) ? "NO" : "YES") << endl;
    }
}