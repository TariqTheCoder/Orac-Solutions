#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  int low = 0, high = n;

  while (low < high) {
    int mid = (low + high) / 2;
    int parks = ceil(n / (mid + 1));
    if (parks <= k)
      high = mid;
    else
      low = mid + 1;
  }
  cout << low;
}
