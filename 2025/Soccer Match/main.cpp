#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;

  int G[200005];
  for (int i = 0; i < N; i++) {
    scanf("%d", &G[i]);
  }

  int team1 = 0, team2 = 0;

  for (int i = 0; i < N; i++) {
    if (G[i] == 1) {
      team1++;
    } else {
      team2++;
    }
    if (team1 > team2) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
}
