#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int turns = 0;
    while (true) {
        if ((n-1)%11 == 0) {
            cout << turns << " " << n;
            return 0;
        } else {
            n*=2;
            turns++;
        }
    }
}
