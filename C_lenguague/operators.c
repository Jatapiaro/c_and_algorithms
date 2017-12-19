#include <stdio.h>

int main(int argc, char const *argv[]) {

    int a;

    a = 4;

    printf("%d\n", a++);
    printf("%d\n", a);

    printf("%d\n", --a);
    printf("%d\n", a);

    return 0;
}
