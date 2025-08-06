#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (j % 2 == 1) {
                cnt = i;
                cout << cnt;
            }
            else if (j % 2 == 0) {
                cnt = (N + 1) - i;
                cout << cnt;
            }
        }
        cout << endl;
    }
    return 0;
}