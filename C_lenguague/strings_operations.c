#include <stdio.h>
#include <stdlib.h>
/*
* You can include string library
* which have many useful functions
* that help us
*/
#include <string.h>
#include <stdbool.h>

bool compare_strings( char s1[], char s2[] ) {
    int len1 = strlen(s1), len2 = strlen(s2);
    if ( len1 == len2 ) {
        int i = 0;
        for ( i = 0; i<len1; i++) {
            if ( s1[i] != s2[i] ) {
                return false;
            }
        }
        return true;

    } else {
        return false;
    }
}

int main(int argc, char const *argv[]) {

    /*
    * A string is a sequence of char
    * in a linear data structure (array)
    * an array of characters to be simple
    * the last element must end in \0
    */
    char c;
    for ( c = 'a'; c <= 'z'; c++ ){
        //printf("%c --> %d\n", c, c);
    }

    char str [10];
    str[0] = 'a';
    str[1] = 'b';
    str[2] = '0';
    str[3] = '\0';
    str[4] = 'j';
    printf("%s\n", str);


    //This will automatic will add the \0
    char str2[10] = "hello";
    printf("%s\n", str2);

    //Add an extra for the \0 if you exceed the originally 10
    char str3[11] = "hellohello";
    printf("%s\n", str3);

    /*
    * str1 == str2 this will compare the pointer
    */
    char str4[11] = "pr";
    char str5[11] = "per";
    printf("%d\n", strcmp( str2, str ) );

    char strx[100] = "sommeshit";
    strcat(strx, str5);
    //concatenate
    printf("%s\n",  strx);


    char str6[110] = "hello";
    strcpy(str6, "world");
    printf("%s\n", str6);

    char input[110] = "input";
    gets(input);
    printf("%s\n", input);

    printf("%c\n", getchar());


    //To know lenght of string
    printf("%s -> %lu\n", strx, strlen(strx));

    if ( compare_strings("somecaca", "somecaca") ) {
        printf("Equals\n");
    } else {
        printf("Not equal\n");
    }



    return 0;
}
