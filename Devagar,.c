
#include <stdio.h>

int main() 
{

    
    int velv, velm, pont;
    double mult, condicao1, condicao2;
    scanf("%d", &velm);
    scanf("%d", &velv);
    condicao1=velm*1.20;
    condicao2=velm*1.50;
    
    if (velv>velm && velv<=condicao1)
    {
        mult=85.13;
        pont=4;
        printf("%.2lf\n%d\n",mult,pont);
    }
    else if(velv>condicao1 && velv<=condicao2)
    {
        mult=127.69;
        pont=5;
        printf("%.2lf\n%d\n",mult,pont);
    }
    else if(velv>condicao2)
    {
        mult=574.62;
        pont=7;
        printf("%.2lf\n%d\n",mult,pont);
    }
    else 
    {
        printf("0.00\n0\n");
    }
    
    
    
    
    return 0;
}