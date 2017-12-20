#include <stdio.h>

int main(int argc, char const *argv[]) {

    int i = 9;
    {
        int i = 10;
        printf("%i\n", i);
    }
    printf("%i\n", i);
    return 0;
}
