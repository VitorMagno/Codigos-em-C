#include <stdio.h>

int main()
{
    //"Aprovado", se a m�dia estiver no intervalo [70; 100]
    //"Reprovado", se a m�dia estiver no intervalo [0; 40] 
    //"Final", se a m�dia estiver no intervalo (40; 70).
    //"M�dia inv�lida" em qualquer outro caso.
    double n1,n2,n3,m,n;
    //printf("Digite as tr�s notas de seu aluno [00,100]");
    scanf("%lf%lf%lf",&n1,&n2,&n3);
    n=n1+n2+n3;
    m=n/3;
    if (m>=70 && m<=100)
    {
        printf("A media do aluno foi %.2lf e ele foi APROVADO\n",m);
    }
    else if(m>=40 && m<=70)
    {
        printf("A media do aluno foi %.2lf e ele foi FINAL\n",m);
    }
    else if(m>=0 && m<=40)
    {
        printf("A media do aluno foi %.2lf e ele foi REPROVADO\n",m);
    }
    else
    {
        printf("Media invalida\n");
    }


    
return 0;
}
