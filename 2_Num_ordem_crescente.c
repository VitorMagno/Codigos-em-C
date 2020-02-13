
#include <stdio.h>

int main() 
{
    int int1,int2,aux;
    scanf("%d%d",&int1,&int2);
    if(int1>=int2)
    {
        aux=int1;
        int1=int2;
        int2=aux;
        printf("%d %d\n",int1,int2);
    }
    else 
    {
        
        printf("%d %d\n",int1,int2);
    }

    
    
    
    return 0;
}