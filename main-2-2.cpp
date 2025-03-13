#include <iostream>
#include "functions6.h"

int main() {
    int binary_digits[] = {1,1,0,1};
    int number_of_digits = sizeof(binary_digits) / sizeof(binary_digits[0]);

    int decimal_value = binary_to_int(binary_digits, number_of_digits);
    std::cout << "Decimal value: " << decimal_value << std::endl;

    return 0;
}