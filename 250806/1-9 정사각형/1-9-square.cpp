#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 1;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (cnt == 10) {
                cnt = 1;
            }
            cout << cnt;
            cnt ++;
        }
        cout << endl;
    }
    return 0;
}