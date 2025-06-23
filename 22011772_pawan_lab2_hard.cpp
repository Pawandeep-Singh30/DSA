//PAWANDEEP SINGH A/L BALWINDER SINGH
//22011772

#include <bits/stdc++.h>
using namespace std;
#define N 5

int main() {
    int mat[N][N];

    cout << "Enter " << N * N << " elements for a " << N << "x" << N << " matrix:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> mat[i][j];
        }
    }

    int maxValue = INT_MIN;

    for (int a = 0; a < N - 1; a++) {
        for (int b = 0; b < N - 1; b++) {
            for (int d = a + 1; d < N; d++) {
                for (int e = b + 1; e < N; e++) {
                    int diff = mat[d][e] - mat[a][b];
                    if (diff > maxValue) {
                        maxValue = diff;
                    }
                }
            }
        }
    }

    cout << "Maximum Value is " << maxValue << endl;

    return 0;
}
