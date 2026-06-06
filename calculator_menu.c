#include <stdio.h>

int main(){


 char name_initial;
    int age;

    printf("Your name initial: ");
    scanf("%c", &name_initial);
    int addition_enabled = 0;
    int multiplication_enabled = 0;
    int subtraction_enabled = 0;
    int division_enabled=0;
    int i ;
    int enabled = 1;
    int disabled = 0 ;
    char a ;

    if( name_initial == 't'|| name_initial == 'T')
    {
    printf("welcome admin\nplease choose a operation\n1.addition\n2.multiplication\n3.subtraction\n4.division\n");
    scanf("%d",&i);
      if(i==1){
        printf("to enable/disable \n press y/n\n");
        scanf(" %c", &a);
        if(a == 'y')
        {addition_enabled = enabled ;
        printf("addition is enabled");}
        else{
            addition_enabled=disabled;
            printf("addition is dissabled\n");
        }
      }
      else if (i==2){
        printf("to enable/disable \n press y/n\n");
        scanf(" %c", &a);
            if(a == 'y'){
            multiplication_enabled = enabled ;
            printf("multiplication is enabled\n");
            }
            else{
                multiplication_enabled=disabled;
            printf("multiplication is dissabled\n");
         }}

      else if (i==3){
            printf("to enable/disable \n press y/n\n");
            scanf(" %c", &a);
            if(a == 'y'){
            subtraction_enabled = enabled ;
            printf("subtraction is enabled\n");}

            else{
                subtraction_enabled=disabled;
            printf("subtraction is dissabled\n");
            }
        }

        else if (i==4){
            printf("to enable/disable \n press y/n\n");
            scanf(" %c", &a);
            if(a == 'y'){
            division_enabled = enabled ;
            printf("division is enabled\n");}

            else{
                division_enabled=disabled;
            printf("division is dissabled\n");
            }
        }
        
        else{
            printf("wrong specifier\n");

        }

        printf("byy admin\n");
    }


    else
    {
       
    }

    return 0;



}











