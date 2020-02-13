#include <stdio.h> 

int main ()
{
        double a, b, c, nota1, nota2, nota3, media;
        scanf("%lf%lf%lf", &a, &b, &c);
        nota1= a*2;
        nota2= b*3;
        nota3= c*5;
        media= (nota1+nota2+nota3)/10;
       
        printf("MEDIA = %.1lf\n", media);
        
    
    return 0;
}