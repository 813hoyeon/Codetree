#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 2;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (cnt == 10) {
                cnt = 2;
            }
            cout << cnt << " ";
            cnt += 2;
        }
        cout << endl;
    }
    return 0;
}