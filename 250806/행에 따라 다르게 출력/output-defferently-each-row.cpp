#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 1;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cout << cnt << " ";
            if ((i % 2 == 1 && j == N) || (i % 2 == 0 && j != N)) {
                cnt += 2;
            }
            else if ((i % 2 == 0 && j == N) || (i % 2 == 1 && j != N)) {
                cnt += 1;
            }
        }
        cout << endl;
    }
    return 0;
}