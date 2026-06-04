#include <stdio.h>

int main() {

    int marks[5] = {100,200,300,400,500};

    for(int i=0; i<5000; i++) {
        printf("%d\n", marks[i]);
    }

    return 0;
}