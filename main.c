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
    short double myfloat2 = 2.2;
    unsigned integer3 = 2352;
    unsigned long integer4 = 2345542 ;
    printf("the size of integer is %ld \n " , sizeof(integer));
    printf("hello");     
    return 0;
}
