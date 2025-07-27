#include <iostream>
using namespace std;

int main() {
    int A,B;
    cin >> A >> B;
    if (A > 0) {
        for (int i = 1; i <= B; i++) {
            cout << A;
        }
    }
    else if (A <= 0) {
        cout << 0;
    }
    return 0;
}