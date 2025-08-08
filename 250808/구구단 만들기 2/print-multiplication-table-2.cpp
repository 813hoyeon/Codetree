#include <iostream>
using namespace std;

int main() {
    int A,B;
    cin >> A >> B;
    for (int i = 2; i <= 8; i+=2) {
        for (int j = B; j >= A; j--) {
            if (j == A) {
                cout << j << " * " << i << " = " << j * i;
            }
            else {
                cout << j << " * " << i << " = " << j * i << " / ";
            }
        }
        cout << endl;
    }
    return 0;
}