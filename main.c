#include <stdio.h>

int main()
{

    //simple calculator logic
    int num1;
    int num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\n");

    printf("a = addition\n");
    printf("b = subtraction\n");
    printf("c = multiplication\n");
    printf("d = division\n");

    char z;

    printf("Enter your option: ");
    scanf(" %c", &z);

    if(z == 'a')
    {
        printf("Addition: %d\n", num1 + num2);
    }

    else if(z == 'b')
    {
        printf("Subtraction: %d\n", num1 - num2);
    }

    else if(z == 'c')
    {
        printf("Multiplication: %d\n", num1 * num2);
    }

    else if(z == 'd')
    {
        printf("Division: %d\n", num1 / num2);
    }

    else
    {
        printf("Invalid option\n");
    }

    return 0;
    
}