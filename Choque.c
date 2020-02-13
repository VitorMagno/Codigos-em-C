#include <stdio.h>

int main()
{
    //Level	Pot�ncia (em W)
    //1-20 	20 + (level)3
    //21-40	8000 + (level - 10)2
    //41-60	9000 + 5*level
    //61-80	9300 + 2*level
    //81-100	9500 + level
    int l,p,e;
    scanf("%d",&l);

    if (l>=1 && l<=20)
    {
        p=20+(l*l*l);
    }
    else if (l>20 && l<=40)
    {
        p=8000+((l-10)*(l-10));
    }
    else if (l>40 && l<=60)
    {
        p=9000+5*l;
    }
    else if(l>60 && l<=80)
    {
        p=9300+2*l;
    }
    else if(l>80 && l<100)
    {
        p=9500+l;
    }
    printf("Potencia de : %d W\n",p);
return 0;
}
