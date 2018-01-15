#include <stdio.h>
#include <stdlib.h>

void f( int * pointer_to_x ) {
    *pointer_to_x = 5;
}

int main(int argc, char const *argv[]) {

    /*
    * Pointers as function arguments
    * this feature allows to customize
    * the content that we sent as an argument
    * to a function
    */
    int a = 8;
    //Here a got copied, it doesnt have the same variable
    f(&a);
    printf("%d\n", a);

    return 0;
}
