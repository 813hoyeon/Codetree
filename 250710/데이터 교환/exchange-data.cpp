#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 6, c = 7;
    int temp1, temp2;
    temp1 = a;
    temp2 = b;
    b = temp1;
    a = c;
    c = temp2;
    cout << a << endl << b << endl << c;
    return 0;
}