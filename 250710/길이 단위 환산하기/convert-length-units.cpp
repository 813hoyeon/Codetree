#include <iostream>
using namespace std;

int main() {
    double a;
    cin >> a;
    double b = 30.48;
    cout << fixed;
    cout.precision(1);
    cout << a * b;
    return 0;
}