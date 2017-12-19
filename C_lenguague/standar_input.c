#include <stdio.h>

int main(int argc, char const *argv[]) {

    int a;
    char b;
    /*
    * a is a variable, but for
    * input, we need to fill the variable itself
    * we need to fill the address
    * When the user puts something in the console
    * scanf will put our number in that address
    * to get the address of a variable we use &
    */
    /*scanf("%i\n%c", &a, &b);
    printf("%i\n", a);
    printf("%c\n", b);*/

    /*
    * To read text
    */
    char t[100];
    //scanf("%s\n", &t);
    gets(t);
    printf("%s\n", t);

    /*
    * An string is an array of characters
    */

    return 0;

}
