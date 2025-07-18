#include <iostream>
using namespace std;

int main() {
    int h,w;
    cin >> h >> w;
    double b;
    cout << fixed;
    cout.precision(0);
    b = (10000 * w) / (h * h);
    cout << b;
    if (b >= 25) {
        cout << endl << "Obesity";
    }
    return 0;
}