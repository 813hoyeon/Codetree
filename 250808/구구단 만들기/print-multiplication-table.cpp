#include <iostream>
using namespace std;

int main() {
    int A,B;
    cin >> A >> B;
    for (int i = 1; i <= 9; i++) {
        for (int j = B; j >= A; j-=2) {
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