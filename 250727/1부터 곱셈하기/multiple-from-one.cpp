#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int prod = 1;
    for (int i = 1; i <= 10; i++) {
        prod *= i;
        if (prod >= N) {
            cout << i;
            break;
        }
    }
    return 0;
}