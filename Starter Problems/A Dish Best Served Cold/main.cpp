#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    cout << arr[0] << " " << arr[n - 1]
    << " " << accumulate(begin(arr), arr+n, 0)/n << endl;

    return 0;
}
