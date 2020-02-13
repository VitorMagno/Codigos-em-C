#include <stdio.h>

int main()
{
    //menor igual 280 multiplicar por 1.20
    //maior que 280 e menor que 700 multiplicar por 1.15
    //maior que 700 e menor que 1500 multiplicar por 1.10
    //maior igual 1500 multiplica por 1.05
    double salarioAtual, multiplicador, aumento, novoSalario;
    scanf("%lf",&salarioAtual);

    if (salarioAtual<=280)
    {
        novoSalario=1.20*salarioAtual;
        multiplicador=20;
        aumento=novoSalario-salarioAtual;
        printf("%.2lf\n%.0lf\n%.2lf\n%.2lf\n", salarioAtual, multiplicador, aumento, novoSalario);
    }
    else if(salarioAtual>280 && salarioAtual<700)
    {
        novoSalario=1.15*salarioAtual;
        multiplicador=15;
        aumento=novoSalario-salarioAtual;
        printf("%.2lf\n%.0lf\n%.2lf\n%.2lf\n",salarioAtual, multiplicador, aumento, novoSalario);  
    }
    else if(salarioAtual>=700 && salarioAtual<1500)
    {
        
        novoSalario=1.10*salarioAtual;
        multiplicador=10;
        aumento=novoSalario-salarioAtual;
        printf("%.2lf\n%.0lf\n%.2lf\n%.2lf\n", salarioAtual, multiplicador, aumento, novoSalario);
    }
    else if(salarioAtual>=1500)
    {
        
        novoSalario=1.05*salarioAtual;
        multiplicador=05;
        aumento=novoSalario-salarioAtual;
        printf("%.2lf\n%.0lf\n%.2lf\n%.2lf\n", salarioAtual, multiplicador, aumento, novoSalario);
    }





    return 0;
}