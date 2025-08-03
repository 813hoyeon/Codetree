#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    bool satisfied = false;
    for (int i = 2; i <= N - 1; i++) {
        if (N % i == 0) {
            satisfied = true;
        }
        else {

        }
    }
    if (satisfied == true) {
        cout << 'C';
    }
    else {
        cout << 'N';
    }
    return 0;
}