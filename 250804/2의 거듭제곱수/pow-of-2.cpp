#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int x = 0;
    while (1) {
        if (N == 1) {
            cout << x;
            break;
        }
        else {
            N = N / 2;
            x = x + 1;
        }
    }
    return 0;
}