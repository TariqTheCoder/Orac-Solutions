#include <iostream>
#include <deque>
#include <algorithm>
 
using namespace std;
 
int N;
int K;
 
int cost;
 
int main() {
    cin >> N >> K;
    deque<int> costs(N);
    for (size_t i = 0; i < N; i++) {
        scanf("%d", &costs[i]);
    }
    sort(costs.begin(), costs.end());
    while (costs.size() > 0) {
        int first = 0;
        if (K > 0) {
            cost+=costs[first];
            costs.pop_front();
            costs.pop_back();
            K--;
        } else {
            cost+=costs[first+1];
            costs.pop_front();
            costs.pop_front();
        }
    }
    cout << cost;
    
}
