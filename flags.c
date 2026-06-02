#include <stdio.h>

int main(){

    int addition_enabled = 0;
    int a;
    printf("addition currently disabled\ntype 0/1 to disable/enable it \n");
    scanf("%d",&a);
    if(a==1){
        addition_enabled = a ;
        printf("addition successfully enabled\n");
    }
    else if(a==0){
        addition_enabled = a ;
        printf("addition is dissabled\n");

    }
    else{

        printf("wrong specifier\n");
    }


    printf("flag value = %d\n", addition_enabled);
    










    return 0;
}