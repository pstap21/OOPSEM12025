#include "functions7.h"
#include <iostream>

int main() {
    int array1[] = {1, 2, 3, 2, 1}; // Palindrome array
    int array2[] = {1, 2, 3, 4, 5}; // Not a palindrome


    int length1 = sizeof(array1) / sizeof(array1[0]);
    int length2 = sizeof(array2) / sizeof(array2[0]);
    

    std::cout << "Sum if palindrome (array1): " << sum_if_palindrome(array1, length1) << std::endl;
    std::cout << "Sum if palindrome (array2): " << sum_if_palindrome(array2, length2) << std::endl;
    

    return 0;
}