#include <stdio.h>

int main()
{
   //se for mulher ou um homem com mais de 40 anos fica barato
   //
    int h,i,b;
    scanf("%d%d",&h,&i);
    if(h==1 || i==0)
    {
        b=0;
    }
    else
    {
        b=1;
    }
    
    printf(" %d \n",b);
return 0;
}
