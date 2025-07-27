#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        int n;
        cin >> n;
        sum += n;
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << (double)sum / N;
    return 0;
}