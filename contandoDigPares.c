#include <stdio.h>

int main()
{
    void imprimir();
    int cont_par(int n, int pares);
    
    imprimir();

    return 0;
}


    void imprimir ()
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", cont_par (n, 0));
    }

    int cont_par (int n, int pares)
    {
        int r = n % 10;  
        if(n <= 1)
        {
            return pares;
        }

        else
        {
            if ( r % 2 == 0)
            {
                return cont_par (n / 10, pares + 1);
            }
            else 
            {
                return cont_par (n / 10, pares);
            }
        }
    }