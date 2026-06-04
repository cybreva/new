#include <stdio.h>

int main()
{
    int x = 10;

    int *ptr = &x;

    printf("\nx = %d\n", x);
    printf("\nptr = %p\n", ptr);
    printf("\n*ptr = %d\n", *ptr);
    printf("by by ");


    return 0;
}