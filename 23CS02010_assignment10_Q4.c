// We have to define a fixed size array with unions. it cannot be changed dynamically with runtime.
#include <stdio.h>

union arrays
{
    int arr1[10];
    float arr2[10];
    char arr3[10];
} ar1;

int main()
{
    int a,b,c;
    printf("Enter the size of integer array: ");
    scanf("%d",&a);
    printf("Enter the array elements:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &ar1.arr1[i]);
    }
    printf("\n");
    printf("The array elements are:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", ar1.arr1[i]);
    }
    printf("\n\n");
    printf("Enter the size of float array: ");
    scanf("%d",&b);
    printf("Enter the array elements:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &ar1.arr2[i]);
    }
    printf("\n");
    printf("The array elements are:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%f ", ar1.arr2[i]);
    }
    printf("\n\n");
    printf("Enter the size of character array: ");
    scanf("%d",&c);
    printf("Enter the array elements:\n");
    for (int i = 0; i < 10; i++)
    {
        fflush(stdin);
        scanf("%c", &ar1.arr3[i]);
        getchar();
    }
    printf("\n");
    printf("The array elements are:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%c ", ar1.arr3[i]);
    }

    return 0;
}