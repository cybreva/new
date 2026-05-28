#include <stdio.h> 

int main()
{
    
    /*long int           -> %ld
      short int          -> %hd
      unsigned int       -> %u
      long long int      -> %lld
      unsigned long      -> %lu
      float              -> %f
      double             -> %lf
      long double        -> %Lf
    */
 
    int a = 7 ;
    float b = 8.0 ;
    char c = 't' ;
    long integer = 123123 ;
    short integer2 = 1 ;
    double myfloat = 2.02;
    long double myfloat3 = 2.4837589023;
    unsigned integer3 = 2352;
    unsigned long integer4 = 2345542 ;
    printf("the size of integer is %d \n " , sizeof(a));
    printf("the size of float is %f \n " , sizeof(b));
    printf("the size of char is %c \n " , sizeof(c));
    printf("the size of unsigned integer is %u \n " , sizeof(integer3));
    printf("the size of unsigned long integer is %lu \n " , sizeof(integer4));
    printf("the size of long integer is %ld \n " , sizeof(integer));
    printf("the size of short integer is %ld \n " , sizeof(integer2));
    printf("the size of double float is %lf \n " , sizeof(myfloat));
    printf("the size of long double integer is %Lf \n " , sizeof(myfloat3));
    

    
    return 0;
}
