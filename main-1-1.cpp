#include <iostream>
#include "function-1-1.cpp"

using namespace std;

int main() {

    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int result = sum_diagonal(matrix);

    cout << " The sum of the diagonal elements is: " << result << endl;

    return 0;
}