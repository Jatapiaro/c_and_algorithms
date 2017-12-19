#include <stdio.h>
/*
** The above includes, make the preprocessing
** scan all the files and scan all the file for all
** this syntax. So it copies all the contents of stdio.h in this file
*/
/*
** A macro use de keyword #define
** we told here the compiler that everytime founds an A
** it will print 65
*/
#define A 56

int main(int argc, char const *argv[]) {

    /*
    * When we add a 0 in front of 15, we told
    * the compiler that this number is base 8
    * 0, 1, 2, 3, 4, 5, 6, 7, 10, 11, 12, 13, 14, 15
    * If we add 0x to the 15 this means that we are on hexadecimal base
    */
    int a = 0xA;
    printf("%i\n", a);
    double b = 3141642E-5L;
    printf("%f\n", b);

    char * my_string = "hello\
    world";
    printf("%s\n", my_string);

    printf("%d\n", A);

    return 0;
}
