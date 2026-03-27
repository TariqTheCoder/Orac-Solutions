#include <bits/stdc++.h>

using namespace std;

int N,L;
int A[200005];
int B[200005];


int main() {
    cin >> N >> L;
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        scanf("%d", &B[i]);
    }
    
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < N; j++) {
            if ((A[i] == i || B[i] == i) || (A[j] == i || B[j] == i)) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }


}