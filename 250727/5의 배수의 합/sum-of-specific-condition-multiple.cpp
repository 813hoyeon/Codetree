#include <iostream>
using namespace std;

int main() {
    int A,B;
    cin >> A >> B;
    int sum = 0;
    if (A >= B){
        for (int i = B; i <= A; i++) {
            if (i % 5 == 0) {
                sum += i;
            }
        }   
    }
    else {
        for (int i = A; i <= B; i++) {
            if (i % 5 == 0) {
                sum += i;
            }
        }
    }
    cout << sum;
    return 0;
}