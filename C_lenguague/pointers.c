#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value, value2;
};

typedef struct Node Node;

int main(int argc, char const *argv[]) {

    /*
    * A pointer is a variable that, instead of holding data
    * they hold the addresses of other variables
    */
    int a = 5;
    //type of variable * pointerVarName;
    int * p;
    //Here p takes the address of a
    p = &a;

    printf("%i\n", p);

    //If we add an * in front of p, we will get the value that p points to
    printf("%i\n", *p);

    *p = 7;
    printf("%i\n", *p);
    printf("%i\n", a);

    /*
    * int arr[10] is equal to int * arr;
    */
    //With these we allocate exactly 10 integers in memory
    //We will called this constant pointers
    int arr[10];
    //With these we are not able to acces the elements
    //malloc return void, so we must cat it to int pointer
    int * arrP = (int *) malloc( sizeof(int) * 10 );
    printf("%i\n%i\n", arr, arrP);
    arrP[0] = 9;
    printf("%i\n", arrP[0]);

    /*
    * Pointer can also point to structs
    */
    Node * n;
    //If you want to acces the content the pointer has
    //n++; //Increment to the next node, incrementing the address of bytes
    Node * m;
    //printf("%i\n", n-m);

    return 0;

}
