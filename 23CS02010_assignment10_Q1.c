#include <stdio.h>

union data
{
    int x;
    float y;
    char z;
}example;

int main()
{
    // you can assign value to only one variable at a time
    printf("Correct method\n");
    example.x = 5;
    printf("%d\n", example.x);
    example.y = 5.55;
    printf("%f\n", example.y);
    example.z = 'x';
    printf("%c\n", example.z);

    // demonstrating how not to use unions
    printf("\nIncorrect method\n");
    example.x = 5;
    example.y = 5.55;
    printf("%d\n", example.x); // this will print a garbage value as we assigned value to variable b,so the data of a is lost

    return 0;
}