#include <iostream>
using namespace std;

int main() {
    int cnt = 0;
    for (int i = 0; i < 3; i++) {
        char a;
        int b;
        cin >> a >> b;
        if (a == 'Y') {
            if (b >= 37) {
                cnt += 1;
            }
        }
    }
    if (cnt >= 2) {
        cout << "E";
    }
    else {
        cout << "N";
    }
    return 0;
}