# include <iostream>
#include "functions3.h"
using namespace std;


void print_scaled ( int array[3][3], int scale){

//looping through each row/column
for ( int i = 0; i < 3; i++) {
    for ( int j = 0; j < 3; j ++) {

        cout << array[i][j] * scale;

        if (j < 2) {
            cout << " ";
        }


    }
    cout << endl; //print a new line after each row
    
}
}