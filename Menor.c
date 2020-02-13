#include <stdio.h>

int main()
{
    int a,b,c,menor,maior,meio;
    scanf("%d%d%d", &a, &b, &c);

        menor = a;
    if (b<menor && b<c)
    {
        
        menor=b;
    }
    else if (menor>c)
    {
        menor=c;
    }
            
    printf("%d\n",menor);



    
return 0;
}
