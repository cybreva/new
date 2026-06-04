#include <stdio.h>

int main() {

    int student_marks[5] = {101,90,45,54,34};

    int result = 0;

    for(int i = 0; i < 5; i++) {
        result += student_marks[i];
    }

    printf("%d\n", result);

    return 0;
}