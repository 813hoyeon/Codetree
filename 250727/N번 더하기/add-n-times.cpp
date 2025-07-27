#include <iostream>
using namespace std;

int main() {
    int A,N;
    cin >> A >> N;
    for (int i = 1; i <= N; i++) {
        A = A + N;
        cout << A << endl;
    }
    return 0;
}