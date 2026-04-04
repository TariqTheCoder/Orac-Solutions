#include <iostream>

using namespace std;

int main() {
  int n, c;
  int a[10000];
  int fill = 0;
  int dayFilled = 0;

  cin >> n >> c;

  for (int _ = 0; _ < n; _++) {
    cin >> a[_];
  }

  for (int i = 0; i < n; i++) {
    fill += a[i];
    if (fill >= c) {
      cout << i + 1;
      return 0;
    }
  }
}
