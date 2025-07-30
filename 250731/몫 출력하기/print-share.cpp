#include <iostream>
using namespace std;

int main() {
    int cnt = 1;
    while (1) {
        if (cnt == 4) {
            break;
        }
        int n;
        cin >> n;
        if (n % 2 == 0) {
            n = n / 2;
            cout << n << endl;
            cnt++;
        }
        else {

        }
    }
    return 0;
}