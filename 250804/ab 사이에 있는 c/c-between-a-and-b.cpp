#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    bool satisfied = false;
    int i = 1;
    while (1) {
        if (c > b) {
            break;
        }
        if (c >= a && c <= b) {
            satisfied = true;
            break;
        }
        else {
            i++;
            c = c * i;
        }
    }
    if (satisfied == true) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}