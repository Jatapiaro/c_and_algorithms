#include <stdio.h>

struct Person {

    int id, age;
    int list_of_family_ids[100];

};

typedef struct Person Person;

int main(int argc, char const *argv[]) {

    /*
    ** Structure are complex variables
    ** it can contain more than one value
    */
    Person person;
    person.id = 10;
    person.age = 30;
    person.list_of_family_ids[0] = 35823;
    printf("Id: %i  and age: %i\n", person.id, person.list_of_family_ids[0]);
    return 0;

}
