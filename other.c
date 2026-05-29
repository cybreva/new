#include <stdio.h>

int main (){
    char c ;
    printf("Enter your name initial ; \n ");
    scanf("%c", &c);
    
    if(c=='t' || c== 'T')
    {


        int n ;
        printf("how many numbers you want to add \n?");
        scanf("%d", &n);

        int i = 1 ;
        int num;
        int sum = 0 ;


        while (i<=n){

            printf("enter number %d\n",i);
            scanf("%d", &num);
            i++;
            
            sum = sum + num ;
            
    } 
         printf("Total sum = %d\n", sum);

    }
    
    else{
        printf("sorry you are not allowed\n");
    }
    
    return 0;
}