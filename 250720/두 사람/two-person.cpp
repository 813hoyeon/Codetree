#include <iostream>
using namespace std;

int main() {
    int a1, b1;
    char a2, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    cout << ((a1 >= 19 && a2 == 'M') || (b1 >= 19 && b2 == 'M'));
    return 0;
}