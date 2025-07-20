#include <iostream>
using namespace std;

int main() {
    int M,F;
    cin >> M >> F;
    if (M >= 90) {
        if (F >= 95) {
            cout << 100000;
        }
        else if (F >= 90) {
            cout << 50000;
        }
        else {
            cout << 0;
        }
    }
    else {
        cout << 0;
    }
    return 0;
}