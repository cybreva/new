#include <stdio.h>

int main()
{
    int marks[5] = {100,2000,30000,400000,500000000};

    for(int i=0;i<1000000;i++)
    {
        printf("marks[%d] = %d\n",i,marks[i]);
    }

    return 0;
}