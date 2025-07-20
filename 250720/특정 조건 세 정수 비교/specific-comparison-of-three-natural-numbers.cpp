#include <iostream>
using namespace std;

int main() {
    int A,B,C,M;
    cin >> A >> B >> C;
    if (A >= B) {
        if (B >= C) {
            M = C;
        }
        else {
            M = B;
        }
    }
    else {
        if (A >= C) {
            M = C;
        }
        else {
            M = A;
        }
    }
    cout << (A == M) << " " << (A == B && A == C);
    return 0;
}