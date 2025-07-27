#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int cnt = 0;
    for (int i = 1; i <= 10; i++) {
        int n;
        cin >> n;
        if ((n >= 0) && (n <= 200)) {
            sum += n;
            cnt++;
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << (double)sum / cnt;
    return 0;
}