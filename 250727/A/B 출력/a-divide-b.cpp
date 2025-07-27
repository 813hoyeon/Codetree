#include <iostream>
using namespace std;

int main() {
    int A,B;
    cin >> A >> B;
    cout << A / B << ".";
    int C = (((A % B) * 10) / B);
    int D = (((A % B) * 10) % B);
    for (int i = 1; i <= 20; i++) {
        if (i == 21) {
            if (((D * 10) / B) >= 5) {
                cout << C + 1;
            }
            else {
                cout << C;
            }
        }
        else {
            cout << C;
            int E = D * 10;
            C = E / B;
            D = E % B;
        }
    }
    return 0;
}