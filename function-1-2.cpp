#include <iostream>
#include <stdio.h>
#include "functions1.h"

int is_identity( int array[10][10]){

for (int i = 0; i < 10; i++){
    for ( int j = 0; j < 10; j++) {

        if ( i == j){
            if (array[i][j] != 1) {
                return 0; //not an idenitity matrix
            }
        } else {
            if (array[i][j] != 0) {
                return 0; //not an identitiy matrix
            }
        }
        }
    }
    return 1;
}