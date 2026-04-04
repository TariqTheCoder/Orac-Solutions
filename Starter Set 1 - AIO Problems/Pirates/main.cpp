#include <iostream>

using namespace std;

int main() {
  int l, x, y;
  cin >> l;
  cin >> x;
  cin >> y;

  int way1 = x + y;
  int way2 = (l - x) + (l - y);

  cout << min(way1, way2);
}
