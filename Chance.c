#include <stdio.h>

int main()
{
//[0,20] 4,40% Pessimo

//[20,40] 31,65% Ruim

//[40,60] 56,82% Bom

//[60,80] 80,00% Muito Bom

//[80,100] 94,00% Excelente
   
   
    double qf, qp,ca;
    scanf("%lf%lf",&qp,&qf);
    ca=qf/qp*100;

    if (ca<=20)
    {
        printf("%.2lf%% 4.40%% Pessimo\n",ca);
    }
    else if(ca<=40 && ca>20)
    {
        printf("%.2lf%% 31.65%% Ruim\n", ca);
    }
    else if(ca<=60 && ca>40)
    {
        printf("%.2lf%% 56.82%% Bom\n", ca);
    }
    else if(ca<80 && ca>60)
    {
        printf("%.2lf%% 80.00%% Muito Bom\n", ca);
    }
    else if(ca<=100 && ca>=80)
    {
        printf("%.2lf%% 94.00%% Excelente\n", ca);
    }


 







return 0;
}
