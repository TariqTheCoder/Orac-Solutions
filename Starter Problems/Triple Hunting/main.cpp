#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int no_answers = 0;
    int answer[10000];
    int arr_counter = 0;

    int arr[1000000];
    for (int _ = 0; _<n; _++) {
        cin >> arr[_];
    }

    for (int i = 0; i<n; i++) {
        if (arr[i] % 3 == 0) {
            no_answers++;
            answer[arr_counter] = i+1;
            arr_counter++;
        }
    }
    if (no_answers == 0) {
        cout << "Nothing here!";
        return 0;
    }
    cout << no_answers << endl;
    for (int _ = 0; _<arr_counter; _++)
        cout << answer[_] << " ";
}
