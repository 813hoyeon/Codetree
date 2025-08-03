#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int total_rows = 2 * n - 1;

    for (int i = 1; i <= total_rows; i++) {
        int space, stars;

        if (i <= n) {
            space = n - i;
            stars = i;
        } else {
            space = i - n;
            stars = 2 * n - i;
        }

        for (int j = 0; j < space; j++) {
            cout << " ";
        }

        for (int j = 0; j < stars; j++) {
            cout << "*";
            if (j != stars - 1) cout << " ";
        }

        cout << endl;
    }

    return 0;
}
