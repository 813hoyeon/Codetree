#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int i = 1;
    while (1) {
        N = N / i;
        if (N <= 1) {
            cout << i;
            break;
        }
        i++;
    }
    return 0;
}