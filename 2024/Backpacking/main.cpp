#include <iostream>

using namespace std;

int N, K;
int D[200005];
int C[200005];
int no_cans = 0;
int cheapest = 0;
int cost = 0;

int main() {
  scanf("%d%d", &N, &K);
  for (int i = 0; i < N - 1; i++) {
    scanf("%d", &D[i]);
  }
  for (int i = 0; i < N; i++) {
    scanf("%d", &C[i]);
  }
  cheapest = C[0];

  for (int i = 0; i < N - 1; i++) {
    cheapest = C[i];
    int need = D[i] - no_cans;
    if (need > 0) {
      int buy = min(need, K - no_cans);
      cost += cheapest * buy;
      no_cans += buy;
    }
    no_cans -= D[i];
  }
  cout << cost;
}
