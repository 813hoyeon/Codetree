#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int sum = 0;
    for (int i = N; i <= 100; i++) {
        sum += i;
    }
    cout << sum;
    return 0;
}