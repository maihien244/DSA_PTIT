#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string str;
    getline(cin, str);
    int x1, x2, x3;
    for(int i = 0; i < str.length(); ++i) {
        if(str[i] < '0' || str[i] > '9') {
            str[i] = ' ';
        }
    }
    stringstream ss(str);
    ss >> x1;
    ss >> x2;
    ss >> x3;
    if(x1 + x2 == x3) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}