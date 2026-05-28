#include <stdio.h>

int main()
{
    char name_initial;
    int age;

    printf("Your name initial: ");
    scanf("%c", &name_initial);

    printf("Your age: ");
    scanf("%d", &age);

    if(age >= 18 && name_initial == 't'|| name_initial == 'T')
    {
        printf("Welcome to admin centre\n");
        printf("Wait... data arriving from Mars...\n");
        printf("Special access provided\n");
        printf("Now you are the new prime minister of hell\n");
    }

    else if(age >= 18)
    {
        printf("Access providing please wait...\n");
        printf("Data collecting from NASA servers...\n");
        printf("Access provided...\n");
        printf("Now you can enter hell\n");
    }

    else
    {
        printf("Access denied... you cannot enter hell\n");
    }

    return 0;
}








