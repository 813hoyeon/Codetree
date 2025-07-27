#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        int k;
        cin >> k;
        if ((k % 3 == 0) && (k % 2 == 1)) {
            cout << k << endl;
        }
    }
    return 0;
}