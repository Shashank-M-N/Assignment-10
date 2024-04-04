#include <stdio.h>

struct Structure
{
    int a;
    int b;
    char c;
} s1;

union uni
{
    int d;
    int e;
    char f;
} u1;

int main()
{
    printf("Size of Structure is : %d\n", sizeof(s1));
    // The sizeof for a struct is not always equal to the sum of sizeof of each individual member. It rounds it off to the next multiple of 4
    printf("Size of Union is : %d\n", sizeof(u1));
    // memory allocation is defferent in union and structures, structure allocates memory more than or equal to the sum of individual memories of each memers of structures,
    return 0;
}