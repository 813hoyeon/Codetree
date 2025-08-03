#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = N; i >= 1; i--) {
        for (int k = 1; k <= i; k++) {
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}