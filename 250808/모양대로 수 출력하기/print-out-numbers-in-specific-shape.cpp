#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 0;
    for (int i = N; i >= 1; i--) {
        for (int h = 1; h <= cnt; h++) {
            cout << "  ";
        
        }
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
        cnt++;
    }
    return 0;
}