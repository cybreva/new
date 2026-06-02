#include <stdio.h>


void greet (int num)
{
    printf("welcome %d\n",num);
}

int main(){
    
    for(int i=1;i<2000000;i++){
        greet(i);
    }
    
    
}

