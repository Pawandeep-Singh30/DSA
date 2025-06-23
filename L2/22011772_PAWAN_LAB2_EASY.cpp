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

    vector<vector<int>> mat(rows, vector<int>(columns));
    vector<int> temp;

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cin >> mat[i][j];
            temp.push_back(mat[i][j]); 
        }
    }

    cout << "\nInput Matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    sort(temp.begin(), temp.end());

    int k = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            mat[i][j] = temp[k++];
        }
    }

    cout << "\nSorted Matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
