#include <stdio.h> 

int main ()
{
    int a,b,c,d,pab,pcd,diferenca;
    scanf("%d%d%d%d", &a, &b,&c,&d);
    pab=a*b;
    pcd=c*d;
    diferenca=pab-pcd;
    printf("DIFERENCA = %d\n", diferenca);
        
    
    return 0;
}