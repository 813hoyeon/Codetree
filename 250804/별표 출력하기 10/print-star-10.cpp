#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt1 = 0;
    int cnt2 = 6;
    for (int i = 1; i <= 2 * N; i++) {
        if (i % 2 == 1) {
            int i = 1;
            cnt1 += 1;
            while (i <= cnt1) {
                i++;
                cout << "* ";
            }
            cout << endl;
        }
        else {
            int j = 1;
            cnt2 -= 1;
            while (j <= cnt2) {
                j++;
                cout << "* ";

            }
            cout << endl;
        }
    }
    return 0;
}