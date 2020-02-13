#include <stdio.h> 

int main ()
{
    double f,c;
    scanf("%lf", &f);
    c=f-32;
    c/=1.8;
    printf("%.2lf\n", c);
        
    
    return 0;
}