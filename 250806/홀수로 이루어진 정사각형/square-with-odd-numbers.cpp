#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int num = 10;
    for (int i = 10; i < 10 + (2 * N); i += 2) {
        for (int j = 1; j < 1 + (2 * N); j += 2) {
            cout << i + j << " ";
        }
        cout << endl;
    }
    return 0;
}