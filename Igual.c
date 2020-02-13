#include <stdio.h>

int main ()
{
    int u,d,t;
    scanf("%d%d%d", &u, &d, &t);

    if(u!=d && d!=t && t!=u)
    {
        printf("2\n");
    }
    else if(u==d && d==t && t==u)
    {
        printf("1\n");
    }
    else 
    {
        printf("3\n");
    }



    return 0;
}