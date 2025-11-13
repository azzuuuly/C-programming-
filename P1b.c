#include <stdio.h>

int main() {
    // Printing a simple message
    printf("Hello, World!\n");

    // Printing integers
    int age = 20;
    printf("I am %d years old.\n", age);

    // Printing floating-point numbers
    float pi = 3.14159;
    printf("The value of pi is approximately %.2f.\n", pi);

    // Printing characters and strings
    char grade = 'A';
    printf("My grade is %c.\n", grade);

    char name[] = "Alice";
    printf("My name is %s.\n", name);

    // Printing multiple values
    printf("%s is %d years old and got grade %c.\n", name, age, grade);

    return 0;
}
