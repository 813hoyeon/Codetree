#include <iostream>
using namespace std;

int main() {
    char e;
    cin >> e;
    if (e == 'S') {
        cout << "Superior";
    }
    else if (e == 'A') {
        cout << "Excellent";
    }
    else if (e == 'B') {
        cout << "Good";
    }
    else if (e == 'C') {
        cout << "Usually";
    }
    else if (e == 'D') {
        cout << "Effort";
    }
    else {
        cout << "Failure";
    }
    return 0;
}