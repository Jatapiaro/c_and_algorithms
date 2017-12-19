#include <stdio.h>
int main(int argc, char const *argv[]) {

    char c;
    c = 'a';
    printf("My variable c has the value: %c and %i\n", c,c);

    //To declare a bunch of characters

    char * my_string = "This is some text";
    printf("%s\n", my_string);

    //This can only store positive numbers
    unsigned int a;
    a = -100;
    printf("%i\n", a);

    return 0;
}
