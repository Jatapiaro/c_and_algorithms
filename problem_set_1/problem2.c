/*
* Write a C program which reads two numbers “base” and “expo” ,
* and calculate the power of base to the expo and print the result.
* Note that power(base,expo) = base * base * base …. base  expo times.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

float power( float base, int expo ) {
    int i;
    float result = 1;
    for ( i = 0; i < expo; i++ ) {
        result *= base;
    }
    return result;
}

int main(int argc, char const *argv[]) {

    float base;
    int expo;
    scanf("%f %d", &base, &expo);
    printf("%f\n", power(base, expo));
    printf("%f\n", pow(base, expo));
    return 0;
    
}
