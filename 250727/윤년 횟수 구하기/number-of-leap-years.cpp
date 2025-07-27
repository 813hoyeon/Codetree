#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 4 == 0) {
            if ((i % 100 == 0) && (i % 400 != 0)) {
                
            }
            else {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}