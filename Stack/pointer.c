#include <stdio.h>
int main()
{
    int a = 10, **ptr2;
    int *ptr1 = &a;
    ptr2 = &ptr1;
    printf("The value of a is: %d\n", a);
    printf("The value of ptr1 is: %d\n", ptr1);
    printf("The value of ptr2 is: %d\n", ptr2);

    printf("\n\nThe address of a is: %d\n", &a);
    printf("The address of ptr1 is: %d\n", &ptr1);
    printf("The address of ptr2 is: %d\n", &ptr2);

    printf("\n\nThe value of a is: %d\n", a);
    printf("The value of a is: %d\n", *ptr1);
    printf("The value of a is: %d\n", **ptr2);
}