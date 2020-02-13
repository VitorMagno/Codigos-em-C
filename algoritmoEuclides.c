#include <stdio.h>

int main()
{
    int repeticoes ();
    
    int casos;
    scanf("%d", &casos);
    repeticoes (casos, 0);
  
    return 0;
}
int repeticoes(int r, int aux)
{
    if (aux < r)
    {   
        int a, d;
        scanf("%d%d", &a, &d);
        int euclides ();
        printf ("MDC(%d,%d) = %d\n", a, d, euclides (a,d));
        return repeticoes (r, aux + 1);
    }
    return 0;
}

int euclides (int a,int d)
{
    int resto;
    resto = a%d;
    

    if (resto == 0)
    {
        return d;
    }
    else 
    {
        return euclides (d,resto);
    }
}
