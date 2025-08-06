#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= (N * 2) + 1; i++) {
        for (int j = 1; j <= (N * 2) + 1; j++) {
            if (j % 2 == 1 || i % 2 == 1) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}