#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main ()
{
    double raiz, delta, raizQuadrada;
    double a, b, c, x1, x2;
    scanf("%lf%lf%lf",&a,&b,&c);
    
    delta=(b*b)-(4*a*c);
    raiz = sqrt (delta);
    x1=(raiz-b)/(2*a);
    x2=(-b-raiz)/(2*a);

    if(a==0)
    {
        printf("NEESG\n");
    }
    else if (delta<0)
    {
        printf("NRR\n");
    }
    else
    {
        printf("%.2lf\n%.2lf\n", x1, x2);
    }

    return 0;
}