#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int i = 1;
    while (i <= N) {
        if (i % 3 == 0) {
            cout << i << " ";
            i += 3;
        }
        else {
            i += 1;
        }
    }
    return 0;
}