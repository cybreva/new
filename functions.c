#include <stdio.h>


void greet (int num)
{
    printf("fuckoff %d\n",num);
}

int main(){
    
    for(int i=1;i<2000000;i++){
        greet(i);
    }
    
    
}

