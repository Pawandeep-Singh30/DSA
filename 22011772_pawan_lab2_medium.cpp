//PAWANDEEP SINGH A/L BALWINDER SINGH
//22011772

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int rows, columns;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;

    vector<vector<int>> matrix(rows, vector<int>(columns));
    vector<int> temp;

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cin >> matrix[i][j];
            temp.push_back(matrix[i][j]);
        }
    }

    sort(temp.begin(), temp.end());

    int total = rows * columns;
    double median;
    if (total % 2 == 1) {
        median = temp[total / 2];
    } else {
        median = (temp[total / 2 - 1] + temp[total / 2]) / 2.0;
    }

    cout << "\nMedian of the matrix: " << median << endl;

    return 0;
}
