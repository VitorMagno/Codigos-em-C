#include <stdio.h>

int main()
{
   //escrever um programa que classifique os triangulos pelo comprimento de seus lados
   //tres comprimentos diferentes:escaleno x!=y && x!=z && y!=z
   //dois comprimentos iguais: is�sceles 
   //todos iguais: equilatero x==y && x==z && z==y
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x!=y && x!=z && y!=z)
    {
        printf("escaleno");
    }
    else if(x==y && x==z && z==y)
    {
        printf("equilatero");
    }
    else
    {
        printf("isosceles");
    }



 







return 0;
}
