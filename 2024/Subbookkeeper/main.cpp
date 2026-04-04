#include <iostream>

using namespace std;

int N;
char word[200005];
int no = 0;

int main() {
  scanf("%d", &N);
  scanf("%s", word);

  for (int i = 1; i < N; i++) {
    char prev = word[i - 1];
    char current = word[i];
    if (prev == current) {
      no++;
    } else if (prev == '?') {
      word[i - 1] = current;
      no++;
    } else if (current == '?') {
      word[i] = prev;
      no++;
    }
  }
  cout << no;
}
