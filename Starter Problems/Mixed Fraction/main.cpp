#include <iostream>

using namespace std;

int main() {
  int n, d;
  cin >> n >> d;

  if (n % d == 0) {
    cout << n / d;
    return 0;
  } else {
    int whole = n / d;
    int remainder = n % d;
    cout << whole << " " << remainder << "/" << d;
  }
}
