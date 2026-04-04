#include <iostream>

using namespace std;

int main() {
  int i, c, i_d, c_d;
  cin >> i >> c >> i_d >> c_d;

  int i_plus = i + i_d;
  int i_minus = i - i_d;

  int c_plus = c + c_d;
  int c_minus = c - c_d;

  if (i_plus == c_minus)
    cout << i_plus;
  else if (i_minus == c_plus)
    cout << i_minus;
  else if (i_plus == c_plus)
    cout << i_plus;
  else if (i_minus == c_minus)
    cout << i_minus;
}
