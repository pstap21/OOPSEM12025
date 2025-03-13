#include <iostream>
#include "functions6.h"

//check if array is a palidrome
bool is_palindrome( int integers[], int length) {
    if (length <= 0) return false;

    for(int i = 0; i < length /2; i++){
        if ( integers[i] != integers[length -1-i]){
            return false;

        }

    }
    return true;

}

//calculate the sum of the elements in the array
int sum_array_elements( int integers[], int length){
    if (length <= 0) return -1;

    int sum = 0;
    for ( int i=0; i <length; i++){
        sum += integers[i];

    }
    return sum;
}

//check if array is palindrome and sum of elements is true
int sum_if_palindrome( int integers[], int length) {
    if ( length <= 0) return -1;

    if (is_palindrome(integers, length)) {
        return sum_array_elements (integers, length);
    } else{
        return -2;
    
    }
}

