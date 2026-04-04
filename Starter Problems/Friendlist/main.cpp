#include <iostream>
#include <map>

using namespace std;

int main() {
  int f;
  cin >> f;

  map<int, int> friend_count;
  int max_friends = 0;

  for (int i = 0; i < f; i++) {
    int a, b;
    cin >> a >> b;
    friend_count[a]++;
    friend_count[b]++;
  }

  for (auto it = friend_count.begin(); it != friend_count.end(); it++)
    max_friends = max(max_friends, it->second);

  for (auto it = friend_count.begin(); it != friend_count.end(); it++)
    if (it->second == max_friends)
      cout << it->first << "\n";
}
