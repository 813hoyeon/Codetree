#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        int n;
        cin >> n;
        if ((n % 2 == 1) && (n % 3 == 0)) {
            sum += n;
        }
    }
    cout << sum;
    return 0;
}