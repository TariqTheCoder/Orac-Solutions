#include <iostream>

using namespace std;

int main() {
    int r, s;
    cin >> r >> s;
    int n;
    cin >> n;

    int seats = r*s;
    int standing = n - seats;
    int sitting = 0;

    if (standing < 0)
        standing = 0;
    if (seats <= n)
        sitting = seats;
    else
        sitting = n;

    cout << sitting << " " << standing;
}
