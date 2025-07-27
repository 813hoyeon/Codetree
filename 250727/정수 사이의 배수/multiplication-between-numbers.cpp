#include <iostream>
using namespace std;

int main() {
    int A,B;
    cin >> A >> B;
    int sum = 0;
    int cnt = 0;
    for (int i = A; i <= B; i++) {
        if ((i % 5 == 0) || (i % 7 == 0)) {
            sum += i;
            cnt += 1;
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << (double)sum / cnt;
    return 0;
}