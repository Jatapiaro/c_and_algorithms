/*
* Write a C program which Reads an integer N
* from the standard input. N is the size of the array arr.
* Fill array arr with N integers (from standard input).
* Print out the numbers of arr and their maximum.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void fill_array( int arr[], int n ) {

    int i;
    for( i = 0; i < n; i++) {
        int aux;
        //we can use &arr[i]
        scanf("%i", &aux);
        arr[i] = aux;
    }

}

int get_max( int arr[], int n ) {
    int i;
    int max = 0;
    for( i = 0; i < n; i++) {
        if ( arr[i] > max ) {
            max = arr[i];
        }
    }
    return max;
}

int main(int argc, char const *argv[]) {

    int n;
    scanf("%d", &n);
    int arr[n];
    fill_array(arr, n);
    printf("Max: %d\n", get_max(arr, n));
    return 0;

}
