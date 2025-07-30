#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int cnt = 0;
    while (1) {
        int age;
        cin >> age;
        if (age >= 30 || age <= 10) {
            cout << fixed;
            cout.precision(2);
            cout << (double)sum / cnt;
            break;
        }
        sum += age;
        cnt++;
    }
    return 0;
}