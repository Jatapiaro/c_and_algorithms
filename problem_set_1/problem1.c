/*
*Write a C program which reads two numbers a
* and b from the standard input (Keyboard)
* and swap them, and then print them back on screen.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {

    float a, b;
    float aux;
    scanf("%f %f", &a, &b);
    aux = b;
    b = a;
    a = aux;
    printf("%f %f\n", a, b);
    return 0;
}
