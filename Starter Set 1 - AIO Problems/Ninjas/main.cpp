#include <iostream>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  if (k == 0) {
    cout << 0;
    return 0;
  }

  int per_round = k * (n / (1 + k));
  int remainder = 0;
  (n % (1 + k) == 0) ? remainder = 0 : remainder = (n % (1 + k)) - 1;

  cout << per_round + remainder;
}
