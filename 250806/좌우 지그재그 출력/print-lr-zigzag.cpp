#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 1;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i % 2 == 1) {
                if (j == 1) {
                    cnt = ((i - 1) * N) + 1;
                }
                cout << cnt << " ";
                cnt++;
            }
            else if (i % 2 == 0) {
                if (j == 1) {
                    cnt = i * N;
                }
                cout << cnt << " ";
                cnt--;
            }
        }
        cout << endl;
    }
    return 0;
}