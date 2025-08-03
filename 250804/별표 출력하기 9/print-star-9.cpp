#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) {
            cout << "  ";
        }
        for (int h = 1; h <= (2 * i) - 1; h++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}