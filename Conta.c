
#include <stdio.h>

int main() 
{
    //if (consumo<=10) 
    
    //assinatura = 7;
    //printf("%lf",assinatura);
    
    //else if (consumo<31) 
    
    //constante1=consumo-10;
    //preco1 = assinatura+(constante1*1);
    //printf("%lf",preco1);

    //else if (consumo>=31 && consumo<=100) 
    
    //constante2=consumo-30;
    //preco2 = preco1 + (constante2*2);
    //printf("%lf",preco2);
    
    //else if (consumo>100)
    
    //constante3=consumo-100;
    //preco3 = preco2 + (constante3*5);
    //printf("%lf",preco3);
    

    int consumo4,consumo3,consumo2,consumo, assinatura, constante1, preco1,constante2,preco2,constante3,preco3,preco;
    scanf("%d", &consumo);
    
    assinatura=7;
    
    if (consumo>=1 &&  consumo<=10)
    {
        printf("%d\n",assinatura);
    }
    else if (consumo<=30 && consumo>10)
    {
        constante1=consumo-10;
        preco1 = assinatura + constante1;
        printf("%d\n",preco1);
    }
    else if (consumo>=31 && consumo<=100)
    {
        consumo2=27;
        preco2 = ((consumo-30)*2)+consumo2;
        printf("%d\n",preco2);
    }
    else if (consumo>100)
    {
        consumo=(consumo-100)*5;
       
        preco3 = 167+consumo;
        printf("%d\n",preco3);
    }

    
    
    
    return 0;
}