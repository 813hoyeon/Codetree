#include <iostream>
using namespace std;

int main() {
    int a,s;
    cin >> s >> a;
    if (s) {
        if (a >= 19) {
            cout << "WOMAN";
        }
        else {
            cout << "GIRL";
        }
    }
    else {
        if (a >= 19) {
            cout << "MAN";
        }
        else {
            cout << "BOY";
        }
    }
    return 0;
}