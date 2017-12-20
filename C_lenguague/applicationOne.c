#include <stdio.h>
#include <stdlib.h>

int sum ( int arr[], int n ) {
    int sum, i;
    sum = 0;
    for(i = 0; i<n; i++) {
        sum += arr[i];
    }
    return sum;
}

int get_input(int arr[]) {
    int n;
    printf("Type the size of the array: ");
    scanf("%i", &n);
    for(int i=0; i<n; i++) {
        printf("Type in ARR(%d):", i);
        scanf("%i", &arr[i]);
    }
    return n;
}

int main(int argc, char const *argv[]) {
    int arr[100];
    //int n = sizeof(arr)/sizeof(arr[0]);
    int n = get_input(arr);
    //printf("%lu %lu %lu\n", sizeof(arr), sizeof(arr[0]), sizeof(arr)/sizeof(arr[0]) );
    printf("%i\n", sum(arr,n));
    return 0;
}
