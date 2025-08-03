#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= 2 * n - 1; i++) {
        int space, star;

        if (i <= n) {
            space = n - i;
            star = 2 * i - 1;
        } else {
            space = i - n;
            star = 2 * (2 * n - i) - 1;
        }

        for (int j = 0; j < space; j++) cout << " ";
        for (int j = 0; j < star; j++) cout << "*";
        cout << endl;
    }

    return 0;
}
