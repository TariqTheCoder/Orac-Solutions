#include <iostream>

using namespace std;

int main() {
    int n,q;
    cin >> n >> q;

    int words[10000];
    int questions[10000];
    for (int _ = 0; _<n; _++)
        cin >> words[_];
    for (int _ = 0; _<q; _++)
        cin >> questions[_];

    for (int i = 0; i<q; i++) {
        int page_no = questions[i];
        int answer = words[page_no-1];
        cout << answer << endl;
    }
}
