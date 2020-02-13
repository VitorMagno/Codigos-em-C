
#include <stdio.h>

int main() 
{
    double salario, rendaComprometida, testeLimite, limite;
    scanf("%lf %lf", &salario, &rendaComprometida);
    testeLimite=salario*0.30;
    if(testeLimite<=rendaComprometida)
    {
        printf("0.00\n");
    }
    else if(testeLimite>rendaComprometida)
    {
        limite=testeLimite-rendaComprometida;
        printf("%.2lf\n", limite);
    }
    
    
    
    
    
    
    
    return 0;
}