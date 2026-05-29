#include <stdio.h>

int main()
{
    char c;

    printf("Enter your name initial: ");
    scanf("%c", &c);

    if(c == 't' || c == 'T')
    {
        int n;

        printf("How many numbers do you want to add? ");
        scanf("%d", &n);

        int num;
        int sum = 0;

        for(int i = 1; i <= n; i++)
        {
            printf("Enter number %d: ", i);

            if(scanf("%d", &num) != 1)
            {
                printf("Invalid input detected\n");
                break;
            }

            sum = sum + num;
        }

        printf("Total sum = %d\n", sum);
    }

    else
    {
        printf("Sorry, you are not allowed\n");
    }

    return 0;
}