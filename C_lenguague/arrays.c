#include <stdio.h>

int main(int argc, char const *argv[]) {

    /*
    * This holds 10 integers
    */
    int arr[10];
    int i;
    for ( i = 0; i < 10; i++ ){
        arr[i] = i;
        printf("%i\n", arr[i]);
    }

    char arr2[4] = {'a', 'f', 'c', 'r'};

    for ( i = 0; i < 4; i++ ){
        printf("%c", arr2[i]);
    }
    printf("\n");

    return 0;
}
