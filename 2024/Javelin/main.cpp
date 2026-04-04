#include <iostream>

using namespace std;

int N;
int D[200005];
int longest = 0;
int no = 0;

int main() {
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    scanf("%d", &D[i]);
  }

  for (int i = 0; i < N; i++) {
    if (D[i] > longest) {
      longest = D[i];
      no++;
    }
  }
  cout << no;
  return 0;
}
