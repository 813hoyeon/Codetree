#include <iostream>
using namespace std;

int main() {
    int A,B;
    cin >> A >> B;
    int i = A;
    while (i <= B) {
        if (i % 2 == 1) {
            cout << i << " ";
            i = i * 2;
        }
        else if (i % 2 == 0) {
            cout << i << " ";
            i = i + 3;
        }
    }
    return 0;
}