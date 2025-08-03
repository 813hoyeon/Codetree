#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 0;
    while (1) {
        if (N == 1) {
            cout << cnt;
            break;
        }
        if (N % 2 == 0) {
            N = N / 2;
            cnt++;
        }
        else {
            N = (N * 3) + 1;
            cnt++;
        }
    }
    return 0;
}