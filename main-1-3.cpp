#include <iostream>
#include "function-1-3.cpp"

int main() {
    

    int matrix[4][4] = {
        {1, 0, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1}
    };
    
    
    count_digits(matrix);
    
    return 0;
}