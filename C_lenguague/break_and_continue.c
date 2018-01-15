#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    //break allows to quit a loop
    for ( int i = 0; i < 100; i++) {
        printf("%d\n", i);
        if ( i > 60 ) {
            break;
        }
    }

    //continue just go to the next iteration

    return 0;
}
