#include <iostream>
#include "workshop.h"


void changeValue(double* ptr){
    *ptr = 42.0;
}
    int main(){
        double num = 9.0;
        std::cout << "changeValue before: " << num << std::endl;

        changeValue(&num);

        std::cout << "changeValue after: " << num << std::endl;

        return 0;

    }


void printArray(double* arr, int size) {
    for ( int i=0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout <<std::endl;
}

    int main() {
        double numbers[] = {2.3, 4.50, 6.03};
        int size = sizeof(numbers) / sizeof(numbers[0]);

        std::cout << "The arrays contents are: ";
        printArray(numbers, size);

        return 0;

    }




