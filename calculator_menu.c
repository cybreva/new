#include <stdio.h>

int main (){

    char pass ;

    printf("welcome \n enter your one char password");
    scanf("%c",&pass);

    int option;

    if(pass=='T'||pass=='t'){
    
    

        printf("welcome admin\n please specify what programme you want to add\n1. addition\n2. subtraction\n3. multiplication\n4. division\n");
        scanf("%d",&option);
    
    
    }
    else{
        if(option==1||option==3){

            int n;

        printf("welcome user\nHow many numbers do you want to add? ");
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
        


    }






















}