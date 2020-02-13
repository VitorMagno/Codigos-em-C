
#include <stdio.h>

int main() 
{
    //salario>500 * 1.10;
    //salario>=300 && <=500 *1.07;
    //else * 1.05;
    double salario, aumento;
    scanf("%lf",&salario);
    if(salario>500)
    {
        salario*=1.10;
        printf("%.2lf\n",salario);
    }
    else if(salario>=300 && salario<=500)
    {
        salario*=1.07;
        printf("%.2lf\n",salario);
    }
    else
    {
        salario*=1.05;
        printf("%.2lf\n",salario);
    }

    
    
    
    return 0;
}