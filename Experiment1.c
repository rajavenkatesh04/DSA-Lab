#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//Declaring structure
struct person{
    char name[50];
    int age;
    char city[20];
};

int main() {

    //Declaring Struct Variables
    struct person person1, person2, p[20];

    //Feeding details for Person1
    strcpy(person1.name, "Raja Venkatesh");
    strcpy(person1.city, "Chennai");
    person1.age = 19;

    //Feeding detials of Person2
    strcpy(person2.name, "John");
    strcpy(person2.city, "California");
    person2.age = 20;

    //Printing the structure values
    printf("-----Person1 Details-----\n");
    printf("\nPerson1 name: %s\n", person1.name);
    printf("Person1 City: %s\n", person1.city);
    printf("Person1 Age: %d\n", person1.age);

    printf("\n-----Person2 Details-----\n");
    printf("\nPerson2 name: %s\n", person2.name);
    printf("Person2 City: %s\n", person2.city);
    printf("Person2 Age: %d\n", person2.age);
    printf("\n");

    return 0;





}
