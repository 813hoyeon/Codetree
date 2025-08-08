#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt1 = 0;
    int cnt2 = 0;
    for (int i = N; i >= 1; i--) {
        for (int j = 1; j <= cnt2; j++) {
            cout << "  ";
        }
        for (int h = i; h >= 1; h--) {
            cnt1++;
            if (cnt1 == 10) {
                cnt1 = 1;
            }
            cout << cnt1 << " ";
        }
        cout << endl;
        cnt2++;
    }
    return 0;
}