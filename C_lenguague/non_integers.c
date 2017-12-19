#include <stdio.h>

int main(int argc, char const *argv[]) {

    double my_var, my_var2, my_var3;
    my_var = 5.6;
    my_var2 = 10.89;
    my_var3 = -12.9;
    // We use %f to print float
    printf("my var has the value of: %.2f\n", (my_var * my_var2 - my_var3));
    return 0;
}
