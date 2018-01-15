#include <stdio.h>
#include <stdlib.h>

/*
* This value can only hold the
* following values
*/
enum month_t {
    jan, feb, mar, apr,
    may, jun, jul, aug,
    sep, oct, nov, dec
};

typedef enum month_t month_t;

int main(int argc, char const *argv[]) {

    /*
    * enumerator
    * is a way to define a variable
    * that can hold our define variables
    + it can hold my defined values
    */
    month_t my_month;
    my_month = jun;
    if ( my_month < sep ) {
        printf("%s\n", "Month is less than sep");
    } else {
        printf("%s\n", "Month is after");
    }

    //Basically it works like an array


    return 0;
}
