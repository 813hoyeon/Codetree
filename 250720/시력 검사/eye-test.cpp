#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    cout.precision(1);
    double R,L;
    cin >> R >> L;
    if (R >= 1.0 && L >= 1.0) {
        cout << "High";
    }
    else if (R >= 0.5 && L >= 0.5) {
        cout << "Middle";
    }
    else {
        cout << "Low";
    }
    return 0;
}