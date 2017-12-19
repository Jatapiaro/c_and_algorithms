#include <stdio.h>

int min( int a, int b ) {
    return (a < b)? a : b;
}

void hello() {
    printf("Hello\n");
}

int factorial( int n ) {
    return (n == 0)? 1 : ( n * factorial(n-1) );
}

int main(int argc, char const *argv[]) {

    printf("%i\n", min(8,10));
    hello();
    printf("%i\n", factorial(5));
    return 0;

}
