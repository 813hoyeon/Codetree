#include <iostream>
using namespace std;

int main() {
    int A;
    cin >> A;
    if (A % 2 != 0) {
        A = A + 3;
    }
    if (A % 3 == 0) {
        A = A / 3;
    }
    cout << A;
    return 0;
}