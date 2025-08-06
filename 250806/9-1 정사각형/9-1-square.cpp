#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 9;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (cnt == 0) {
                cnt = 9;
            }
            cout << cnt;
            cnt--;
        }
        cout << endl;
    }
    return 0;
}