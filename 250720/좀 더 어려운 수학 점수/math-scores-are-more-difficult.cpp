#include <iostream>
using namespace std;

int main() {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    if (a1 == b1) {
        if (a2 > b2) {
            cout << "A";
        }
        else if (a2 < b2) {
            cout << "B";
        }
    }
    else {
        if (a1 > b1) {
            cout << "A";
        }
        else {
            cout << "B";
        }
    }
    return 0;
}