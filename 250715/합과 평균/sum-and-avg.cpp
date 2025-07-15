#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << a + b << " ";
    cout << fixed << setprecision(1) << (double)(a + b) / 2;
    return 0;
}
