#include <iostream>
using namespace std;

int main() {
    int N;
    bool satisfied = true;
    for (int i = 1; i <= 5; i++) {
        cin >> N;
        if (N % 3 != 0) {
            satisfied = false;
        }
        else {

        }
    }
    if (satisfied == true) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    return 0;
}