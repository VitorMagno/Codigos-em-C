#include <stdio.h> 

int main ()
{
    double r,ar;
    scanf("%lf",&r);
    ar=r*r;
    ar*=3.14159;
    ar=ar/10000;
    printf("Area = %.4lf\n", ar);
        
    
    return 0;
}