#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    const int rows = 3;
    const int cols = 4;

    int matrix[rows][cols] = {
        {1, 0, 3, 0},
        {0, 5, 6, 0},
        {7, 8, 0, 10}
    };

    vector<int> flatMatrix;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            flatMatrix.push_back(matrix[i][j]);
        }
    }

    int zeroCount = count(flatMatrix.begin(), flatMatrix.end(), 0);

    cout << "Count of element = 0 :  " << zeroCount << endl;

    return 0;
}
