#include <iostream>
using namespace std;

int main() {
    int cnt1 = 0;
    int cnt2 = 0;
    for (int i = 1; i <= 10; i++) {
        int n;
        cin >> n;
        if (n % 3 == 0) {
            cnt1++;
        }
        if (n % 5 == 0) {
            cnt2++;
        }
    }
    cout << cnt1 << " " << cnt2;
    return 0;
}